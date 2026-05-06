#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

// Game constants
#define BEGINNER_WIDTH 9
#define BEGINNER_HEIGHT 9
#define BEGINNER_MINES 10
#define TILE_SIZE 20

enum TileState {
    HIDDEN,
    REVEALED,
    FLAGGED,
    QUESTION,
    EXPLODED
};

enum GameState {
    READY,
    PLAYING,
    WON,
    LOST
};

typedef struct {
    int width;
    int height;
    int mineCount;
    int** tiles;
    int** mines;
    int** numbers;
    GameState state;
    int revealedCount;
    int flagCount;
} GameBoard;

GameBoard* CreateGameBoard(int w, int h, int mines);
void DestroyGameBoard(GameBoard* board);
void PlaceMines(GameBoard* board);
void CalculateNumbers(GameBoard* board);
void StartNewGame(GameBoard* board);
void ClickTile(GameBoard* board, int x, int y, int rightClick, HWND hwnd);
void RevealTile(GameBoard* board, int x, int y);
void RevealEmptyArea(GameBoard* board, int x, int y);
int CheckWin(GameBoard* board);
void Reset(GameBoard* board);
int GetTileState(GameBoard* board, int x, int y);
int GetTileNumber(GameBoard* board, int x, int y);
int IsMine(GameBoard* board, int x, int y);
int GetRemainingMines(GameBoard* board);

GameBoard* CreateGameBoard(int w, int h, int mines) {
    GameBoard* board = (GameBoard*)malloc(sizeof(GameBoard));
    board->width = w;
    board->height = h;
    board->mineCount = mines;
    board->state = READY;
    board->revealedCount = 0;
    board->flagCount = 0;
    
    // Allocate memory
    board->tiles = (int**)malloc(board->height * sizeof(int*));
    board->mines = (int**)malloc(board->height * sizeof(int*));
    board->numbers = (int**)malloc(board->height * sizeof(int*));
    
    for (int i = 0; i < board->height; i++) {
        board->tiles[i] = (int*)malloc(board->width * sizeof(int));
        board->mines[i] = (int*)malloc(board->width * sizeof(int));
        board->numbers[i] = (int*)malloc(board->width * sizeof(int));
        
        // Initialize
        for (int j = 0; j < board->width; j++) {
            board->tiles[i][j] = HIDDEN;
            board->mines[i][j] = 0;
            board->numbers[i][j] = 0;
        }
    }
    
    return board;
}

void DestroyGameBoard(GameBoard* board) {
    for (int i = 0; i < board->height; i++) {
        free(board->tiles[i]);
        free(board->mines[i]);
        free(board->numbers[i]);
    }
    free(board->tiles);
    free(board->mines);
    free(board->numbers);
    free(board);
}

void CalculateNumbers(GameBoard* board) {
    for (int i = 0; i < board->height; i++) {
        for (int j = 0; j < board->width; j++) {
            if (!board->mines[i][j]) {
                int count = 0;
                
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        if (di == 0 && dj == 0) continue;
                        
                        int ni = i + di;
                        int nj = j + dj;
                        
                        if (ni >= 0 && ni < board->height && nj >= 0 && nj < board->width && board->mines[ni][nj]) {
                            count++;
                        }
                    }
                }
                
                board->numbers[i][j] = count;
            } else {
                board->numbers[i][j] = -1;
            }
        }
    }
}

void PlaceMines(GameBoard* board) {
    srand(time(NULL));
    
    int minesPlaced = 0;
    while (minesPlaced < board->mineCount) {
        int x = rand() % board->width;
        int y = rand() % board->height;
        
        if (!board->mines[y][x]) {
            board->mines[y][x] = 1;
            minesPlaced++;
        }
    }
    
    CalculateNumbers(board);
}

void StartNewGame(GameBoard* board) {
    Reset(board);
    PlaceMines(board);
    board->state = READY;
}

void Reset(GameBoard* board) {
    board->revealedCount = 0;
    board->flagCount = 0;
    board->state = READY;
    
    for (int i = 0; i < board->height; i++) {
        for (int j = 0; j < board->width; j++) {
            board->tiles[i][j] = HIDDEN;
            board->mines[i][j] = 0;
            board->numbers[i][j] = 0;
        }
    }
}

void ClickTile(GameBoard* board, int x, int y, int rightClick, HWND hwnd) {
    extern HWND g_hwnd;
    extern UINT_PTR g_timerId;
    
    if (x < 0 || x >= board->width || y < 0 || y >= board->height) return;
    if (board->state == WON || board->state == LOST) return;
    if (board->tiles[y][x] == REVEALED) return;
    
    if (rightClick) {
        if (board->tiles[y][x] == HIDDEN) {
            board->tiles[y][x] = FLAGGED;
            board->flagCount++;
        } else if (board->tiles[y][x] == FLAGGED) {
            board->tiles[y][x] = QUESTION;
            board->flagCount--;
        } else if (board->tiles[y][x] == QUESTION) {
            board->tiles[y][x] = HIDDEN;
        }
        return;
    }
    
    if (board->state == READY) {
        board->state = PLAYING;
    }
    
    if (board->tiles[y][x] == FLAGGED || board->tiles[y][x] == QUESTION) {
        return;
    }
    
    RevealTile(board, x, y);
    
    if (board->mines[y][x]) {
        board->state = LOST;
        for (int i = 0; i < board->height; i++) {
            for (int j = 0; j < board->width; j++) {
                if (board->mines[i][j]) {
                    board->tiles[i][j] = EXPLODED;
                }
            }
        }
        // Stop timer when game is lost
        if (g_timerId) {
            KillTimer(g_hwnd, g_timerId);
            g_timerId = 0;
        }
    } else if (CheckWin(board)) {
        board->state = WON;
        // Stop timer when game is won
        if (g_timerId) {
            KillTimer(g_hwnd, g_timerId);
            g_timerId = 0;
        }
    }
}

void RevealTile(GameBoard* board, int x, int y) {
    if (x < 0 || x >= board->width || y < 0 || y >= board->height) return;
    if (board->tiles[y][x] != HIDDEN) return;
    
    board->tiles[y][x] = REVEALED;
    board->revealedCount++;
    
    if (board->numbers[y][x] == 0) {
        RevealEmptyArea(board, x, y);
    }
}

void RevealEmptyArea(GameBoard* board, int x, int y) {
    for (int di = -1; di <= 1; di++) {
        for (int dj = -1; dj <= 1; dj++) {
            if (di == 0 && dj == 0) continue;
            
            int ni = y + di;
            int nj = x + dj;
            
            if (ni >= 0 && ni < board->height && nj >= 0 && nj < board->width) {
                if (board->tiles[ni][nj] == HIDDEN) {
                    RevealTile(board, nj, ni);
                }
            }
        }
    }
}

int CheckWin(GameBoard* board) {
    return board->revealedCount == (board->width * board->height - board->mineCount);
}

int GetTileState(GameBoard* board, int x, int y) {
    if (x < 0 || x >= board->width || y < 0 || y >= board->height) return HIDDEN;
    return board->tiles[y][x];
}

int GetTileNumber(GameBoard* board, int x, int y) {
    if (x < 0 || x >= board->width || y < 0 || y >= board->height) return 0;
    return board->numbers[y][x];
}

int IsMine(GameBoard* board, int x, int y) {
    if (x < 0 || x >= board->width || y < 0 || y >= board->height) return 0;
    return board->mines[y][x];
}

int GetRemainingMines(GameBoard* board) {
    return board->mineCount - board->flagCount;
}

// Global variables
GameBoard* g_board = NULL;
HWND g_hwnd = NULL;
int g_gameTime = 0;
UINT_PTR g_timerId = 0;
int g_firstClick = 1;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            
            // Clear background
            RECT clientRect;
            GetClientRect(hwnd, &clientRect);
            FillRect(hdc, &clientRect, (HBRUSH)GetStockObject(WHITE_BRUSH));
            
            // Debug output
            if (g_board) {
                char debugStr[64];
                snprintf(debugStr, sizeof(debugStr), "Board: %dx%d, Mines: %d", g_board->width, g_board->height, g_board->mineCount);
                TextOutA(hdc, 10, clientRect.bottom - 20, debugStr, strlen(debugStr));
            }
            
            if (g_board) {
                // Draw UI elements
                SetTextColor(hdc, RGB(0, 0, 0));
                SetBkMode(hdc, TRANSPARENT);
                
                // Draw timer
                char timeStr[32];
                snprintf(timeStr, sizeof(timeStr), "Time: %d", g_gameTime);
                TextOutA(hdc, 10, 10, timeStr, strlen(timeStr));
                
                // Draw mine count
                char mineStr[32];
                snprintf(mineStr, sizeof(mineStr), "Mines: %d", GetRemainingMines(g_board));
                TextOutA(hdc, 100, 10, mineStr, strlen(mineStr));
                
                // Draw face
                char face = g_board->state == LOST ? ':(' : ':)';
                TextOutA(hdc, 200, 10, &face, 1);
                
// Draw board
                for (int y = 0; y < g_board->height; y++) {
                    for (int x = 0; x < g_board->width; x++) {
                        int state = GetTileState(g_board, x, y);
                        RECT tileRect = {x * TILE_SIZE + 2, y * TILE_SIZE + 42, 
                                       (x + 1) * TILE_SIZE + 2, (y + 1) * TILE_SIZE + 42};
                         
                        // Draw tile
                        switch (state) {
                            case HIDDEN:
                                FillRect(hdc, &tileRect, (HBRUSH)GetStockObject(GRAY_BRUSH));
                                break;
                            case REVEALED:
                                FillRect(hdc, &tileRect, (HBRUSH)GetStockObject(WHITE_BRUSH));
                                if (GetTileNumber(g_board, x, y) > 0) {
                                    char numStr[32];
                                    snprintf(numStr, sizeof(numStr), "%d", GetTileNumber(g_board, x, y));
                                    SetTextColor(hdc, RGB(0, 0, 255)); // Blue numbers
                                    SetBkMode(hdc, TRANSPARENT);
                                    TextOutA(hdc, x * TILE_SIZE + 8, y * TILE_SIZE + 48, numStr, strlen(numStr));
                                }
                                break;
                            case FLAGGED:
                                FillRect(hdc, &tileRect, (HBRUSH)GetStockObject(GRAY_BRUSH));
                                SetTextColor(hdc, RGB(255, 0, 0)); // Red flag
                                SetBkMode(hdc, TRANSPARENT);
                                TextOutA(hdc, x * TILE_SIZE + 6, y * TILE_SIZE + 46, "F", 1);
                                break;
                            case QUESTION:
                                FillRect(hdc, &tileRect, (HBRUSH)GetStockObject(GRAY_BRUSH));
                                SetTextColor(hdc, RGB(0, 0, 255)); // Blue question
                                SetBkMode(hdc, TRANSPARENT);
                                TextOutA(hdc, x * TILE_SIZE + 6, y * TILE_SIZE + 46, "?", 1);
                                break;
                            case EXPLODED:
                                FillRect(hdc, &tileRect, CreateSolidBrush(RGB(255, 0, 0)));
                                break;
                        }
                         
                        // Draw border
                        HPEN hPen = CreatePen(PS_SOLID, 1, RGB(128, 128, 128));
                        HPEN hOldPen = (HPEN)SelectObject(hdc, hPen);
                        MoveToEx(hdc, tileRect.left, tileRect.top, NULL);
                        LineTo(hdc, tileRect.right, tileRect.top);
                        LineTo(hdc, tileRect.right, tileRect.bottom);
                        LineTo(hdc, tileRect.left, tileRect.bottom);
                        LineTo(hdc, tileRect.left, tileRect.top);
                        SelectObject(hdc, hOldPen);
                        DeleteObject(hPen);
                    }
                }
            }
            
            EndPaint(hwnd, &ps);
            return 0;
        }
        
        case WM_LBUTTONDOWN:
        case WM_RBUTTONDOWN: {
            if (g_board) {
                int x = LOWORD(lParam) / TILE_SIZE;
                int y = HIWORD(lParam) / TILE_SIZE - 2; // Account for UI
                
                if (x >= 0 && x < g_board->width && y >= 0 && y < g_board->height) {
                    if (g_firstClick && uMsg == WM_LBUTTONDOWN) {
                        g_firstClick = 0;
                        g_timerId = SetTimer(hwnd, 1, 1000, NULL);
                    }
                    
                    ClickTile(g_board, x, y, uMsg == WM_RBUTTONDOWN, hwnd);
                    InvalidateRect(hwnd, NULL, TRUE);
                }
            }
            return 0;
        }
        
        case WM_TIMER:
            if (wParam == 1 && g_board && g_board->state == PLAYING) {
                g_gameTime++;
                InvalidateRect(hwnd, NULL, TRUE);
            }
            return 0;
        
        case WM_KEYDOWN:
            if (wParam == VK_F2) {
                if (g_board) {
                    StartNewGame(g_board);
                    g_gameTime = 0;
                    g_firstClick = 1;
                    if (g_timerId) {
                        KillTimer(hwnd, g_timerId);
                        g_timerId = 0;
                    }
                    InvalidateRect(hwnd, NULL, TRUE);
                }
            }
            return 0;
        
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    // Register window class
    WNDCLASSW wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"Minesweeper";
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    
    if (!RegisterClassW(&wc)) {
        return 1;
    }
    
    // Create game board
    g_board = CreateGameBoard(BEGINNER_WIDTH, BEGINNER_HEIGHT, BEGINNER_MINES);
    StartNewGame(g_board);
    
    // Create window
    int windowWidth = BEGINNER_WIDTH * TILE_SIZE + 20;
    int windowHeight = BEGINNER_HEIGHT * TILE_SIZE + 100;
    
    HWND hwnd = CreateWindowW(
        L"Minesweeper", L"Minesweeper", WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
        CW_USEDEFAULT, CW_USEDEFAULT, windowWidth, windowHeight,
        NULL, NULL, hInstance, NULL);
    
    if (hwnd) {
        g_hwnd = hwnd;
        ShowWindow(hwnd, nShowCmd);
        UpdateWindow(hwnd);
        
        // Message loop
        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }
    
    // Cleanup
    if (g_board) {
        DestroyGameBoard(g_board);
        g_board = NULL;
    }
    
    return 0;
}
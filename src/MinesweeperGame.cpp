#include "MinesweeperGame.h"
#include <windowsx.h>
#include <commctrl.h>
#include <ctime>

const MinesweeperGame::DifficultySettings MinesweeperGame::difficultySettings[] = {
    {9, 9, 10},   // Beginner
    {16, 16, 40}, // Intermediate
    {30, 16, 99}  // Expert
};

MinesweeperGame::MinesweeperGame() 
    : board(nullptr), difficulty(Difficulty::Beginner), isFirstClick(true), gameTime(0), timerId(0), hWnd(nullptr) {
}

MinesweeperGame::~MinesweeperGame() {
    Stop();
    if (board) {
        delete board;
        board = nullptr;
    }
}

bool MinesweeperGame::Initialize(HINSTANCE hInstance) {
    // Initialize common controls
    INITCOMMONCONTROLSEX icex;
    icex.dwSize = sizeof(INITCOMMONCONTROLSEX);
    icex.dwICC = ICC_WIN95_CLASSES;
    InitCommonControlsEx(&icex);
    
    // Create game board
    const auto& settings = difficultySettings[static_cast<int>(difficulty)];
    board = new GameBoard(settings.width, settings.height, settings.mines);
    
    return true;
}

void MinesweeperGame::Start() {
    Reset();
    ShowWindow(hWnd, SW_SHOW);
    UpdateWindow(hWnd);
}

void MinesweeperGame::Stop() {
    if (timerId) {
        KillTimer(hWnd, timerId);
        timerId = 0;
    }
}

void MinesweeperGame::Reset() {
    if (board) {
        board->Reset();
        board->StartNewGame();
    }
    gameTime = 0;
    isFirstClick = true;
    
    if (timerId) {
        KillTimer(hWnd, timerId);
        timerId = 0;
    }
    
    InvalidateRect(hWnd, nullptr, TRUE);
}

void MinesweeperGame::SetDifficulty(Difficulty newDifficulty) {
    if (difficulty == newDifficulty) return;
    
    difficulty = newDifficulty;
    const auto& settings = difficultySettings[static_cast<int>(difficulty)];
    
    // Recreate board with new settings
    delete board;
    board = new GameBoard(settings.width, settings.height, settings.mines);
    
    Reset();
}

LRESULT CALLBACK MinesweeperGame::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    MinesweeperGame* game = reinterpret_cast<MinesweeperGame*>(GetWindowLongPtr(hwnd, GWLP_USERDATA));
    
    if (game) {
        return game->HandleMessage(uMsg, wParam, lParam);
    }
    
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT MinesweeperGame::HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            OnPaint();
            EndPaint(hWnd, &ps);
            return 0;
        }
        
        case WM_TIMER:
            OnTimer();
            return 0;
        
        case WM_LBUTTONDOWN:
            OnLeftClick(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam));
            return 0;
        
        case WM_RBUTTONDOWN:
            OnRightClick(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam));
            return 0;
        
        case WM_KEYDOWN:
            if (wParam == VK_F2) {
                OnNewGame();
            }
            return 0;
        
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        
        default:
            return DefWindowProc(hWnd, uMsg, wParam, lParam);
    }
}

void MinesweeperGame::OnPaint() {
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hWnd, &ps);
    
    // Get window dimensions
    RECT clientRect;
    GetClientRect(hWnd, &clientRect);
    int clientWidth = clientRect.right - clientRect.left;
    int clientHeight = clientRect.bottom - clientRect.top;
    
    // Clear background
    HBRUSH bgBrush = (HBRUSH)GetStockObject(WHITE_BRUSH);
    FillRect(hdc, &clientRect, bgBrush);
    
    // Draw game elements
    DrawNumbers(hdc);
    DrawTimer(hdc);
    DrawMineCount(hdc);
    
    // Draw face button
    DrawFace(hdc, board->GetState() != GameState::Lost);
    
    EndPaint(hWnd, &ps);
}

void MinesweeperGame::OnTimer() {
    gameTime++;
    InvalidateRect(hWnd, nullptr, TRUE);
}

void MinesweeperGame::OnLeftClick(int x, int y) {
    // Convert client coordinates to board coordinates
    const auto& settings = difficultySettings[static_cast<int>(difficulty)];
    int tileSize = 20; // Adjust based on your preference
    int boardX = x / tileSize;
    int boardY = (y - 60) / tileSize; // Account for UI elements
    
    if (boardX >= 0 && boardX < settings.width && boardY >= 0 && boardY < settings.height) {
        if (isFirstClick) {
            timerId = SetTimer(hWnd, 1, 1000, nullptr);
            isFirstClick = false;
        }
        
        board->ClickTile(boardX, boardY, false);
        InvalidateRect(hWnd, nullptr, TRUE);
    }
}

void MinesweeperGame::OnRightClick(int x, int y) {
    const auto& settings = difficultySettings[static_cast<int>(difficulty)];
    int tileSize = 20;
    int boardX = x / tileSize;
    int boardY = (y - 60) / tileSize;
    
    if (boardX >= 0 && boardX < settings.width && boardY >= 0 && boardY < settings.height) {
        board->ClickTile(boardX, boardY, true);
        InvalidateRect(hWnd, nullptr, TRUE);
    }
}

void MinesweeperGame::OnNewGame() {
    Reset();
}

void MinesweeperGame::DrawTile(HDC hdc, int x, int y, TileState state, int number) {
    RECT tileRect = {x * 20, y * 20 + 60, (x + 1) * 20, (y + 1) * 20 + 60};
    
    // Draw tile background
    switch (state) {
        case TileState::Hidden:
            FillRect(hdc, &tileRect, (HBRUSH)GetStockObject(GRAY_BRUSH));
            break;
        case TileState::Revealed:
            FillRect(hdc, &tileRect, (HBRUSH)GetStockObject(WHITE_BRUSH));
            break;
        case TileState::Flagged:
            FillRect(hdc, &tileRect, (HBRUSH)GetStockObject(GRAY_BRUSH));
            // Draw flag here (simplified)
            break;
        case TileState::Question:
            FillRect(hdc, &tileRect, (HBRUSH)GetStockObject(GRAY_BRUSH));
            // Draw question mark here (simplified)
            break;
        case TileState::Exploded:
            FillRect(hdc, &tileRect, (HBRUSH)GetStockObject(RED_BRUSH));
            break;
    }
    
    // Draw tile border
    DrawEdge(hdc, &tileRect, BDR_SUNKENOUTER, BF_RECT);
    
    // Draw number if revealed
    if (state == TileState::Revealed && number > 0) {
        SetTextColor(hdc, RGB(0, 0, 255)); // Blue for numbers
        SetBkMode(hdc, TRANSPARENT);
        
        std::wstring numberStr = std::to_wstring(number);
        TextOut(hdc, x * 20 + 8, y * 20 + 68, numberStr.c_str(), numberStr.length());
    }
}

void MinesweeperGame::DrawFace(HDC hdc, bool happy) {
    RECT faceRect = {100, 10, 120, 30};
    FillRect(hdc, &faceRect, (HBRUSH)GetStockObject(YELLOW_BRUSH));
    
    // Draw simple face (could be enhanced)
    SetTextColor(hdc, RGB(0, 0, 0));
    SetBkMode(hdc, TRANSPARENT);
    
    std::wstring face = happy ? L":)" : L":(";
    TextOut(hdc, 105, 15, face.c_str(), face.length());
}

void MinesweeperGame::DrawNumbers(HDC hdc) {
    const auto& settings = difficultySettings[static_cast<int>(difficulty)];
    
    for (int y = 0; y < settings.height; y++) {
        for (int x = 0; x < settings.width; x++) {
            TileState state = board->GetTileState(x, y);
            int number = board->GetTileNumber(x, y);
            DrawTile(hdc, x, y, state, number);
        }
    }
}

void MinesweeperGame::DrawTimer(HDC hdc) {
    RECT timerRect = {200, 10, 240, 30};
    FillRect(hdc, &timerRect, (HBRUSH)GetStockObject(WHITE_BRUSH));
    
    SetTextColor(hdc, RGB(0, 0, 0));
    SetBkMode(hdc, TRANSPARENT);
    
    std::wstring timeStr = std::to_wstring(gameTime);
    TextOut(hdc, 210, 15, timeStr.c_str(), timeStr.length());
}

void MinesweeperGame::DrawMineCount(HDC hdc) {
    RECT mineRect = {260, 10, 300, 30};
    FillRect(hdc, &mineRect, (HBRUSH)GetStockObject(WHITE_BRUSH));
    
    SetTextColor(hdc, RGB(255, 0, 0));
    SetBkMode(hdc, TRANSPARENT);
    
    std::wstring mineStr = std::to_wstring(board->GetRemainingMines());
    TextOut(hdc, 270, 15, mineStr.c_str(), mineStr.length());
}
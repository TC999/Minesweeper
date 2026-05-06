#include "GameBoard.h"
#include <vector>
#include <random>
#include <algorithm>

GameBoard::GameBoard(int w, int h, int mines) 
    : width(w), height(h), mineCount(mines), revealedCount(0), flagCount(0), state(GameState::Ready) {
    InitializeBoard();
}

GameBoard::~GameBoard() {
    for (int i = 0; i < height; i++) {
        delete[] tiles[i];
        delete[] mines[i];
        delete[] numbers[i];
    }
    delete[] tiles;
    delete[] mines;
    delete[] numbers;
}

void GameBoard::InitializeBoard() {
    // Allocate memory
    tiles = new TileState*[height];
    mines = new bool*[height];
    numbers = new int*[height];
    
    for (int i = 0; i < height; i++) {
        tiles[i] = new TileState[width];
        mines[i] = new bool[width];
        numbers[i] = new int[width];
        
        // Initialize all tiles as hidden
        for (int j = 0; j < width; j++) {
            tiles[i][j] = TileState::Hidden;
            mines[i][j] = false;
            numbers[i][j] = 0;
        }
    }
}

void GameBoard::PlaceMines() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> disX(0, width - 1);
    std::uniform_int_distribution<> disY(0, height - 1);
    
    int minesPlaced = 0;
    while (minesPlaced < mineCount) {
        int x = disX(gen);
        int y = disY(gen);
        
        if (!mines[y][x]) {
            mines[y][x] = true;
            minesPlaced++;
        }
    }
    
    CalculateNumbers();
}

void GameBoard::CalculateNumbers() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (!mines[i][j]) {
                int count = 0;
                
                // Check all 8 neighbors
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        if (di == 0 && dj == 0) continue;
                        
                        int ni = i + di;
                        int nj = j + dj;
                        
                        if (ni >= 0 && ni < height && nj >= 0 && nj < width && mines[ni][nj]) {
                            count++;
                        }
                    }
                }
                
                numbers[i][j] = count;
            } else {
                numbers[i][j] = -1; // Mine
            }
        }
    }
}

void GameBoard::StartNewGame() {
    Reset();
    PlaceMines();
    state = GameState::Ready;
}

void GameBoard::ClickTile(int x, int y, bool rightClick) {
    if (x < 0 || x >= width || y < 0 || y >= height) return;
    if (state == GameState::Won || state == GameState::Lost) return;
    if (tiles[y][x] == TileState::Revealed) return;
    
    if (rightClick) {
        ToggleFlag(x, y);
        return;
    }
    
    if (state == GameState::Ready) {
        state = GameState::Playing;
    }
    
    if (tiles[y][x] == TileState::Flagged || tiles[y][x] == TileState::Question) {
        return;
    }
    
    RevealTile(x, y);
    
    if (mines[y][x]) {
        state = GameState::Lost;
        // Reveal all mines
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (mines[i][j]) {
                    tiles[i][j] = TileState::Exploded;
                }
            }
        }
    } else if (CheckWin()) {
        state = GameState::Won;
    }
}

void GameBoard::RevealTile(int x, int y) {
    if (x < 0 || x >= width || y < 0 || y >= height) return;
    if (tiles[y][x] != TileState::Hidden) return;
    
    tiles[y][x] = TileState::Revealed;
    revealedCount++;
    
    if (numbers[y][x] == 0) {
        RevealEmptyArea(x, y);
    }
}

void GameBoard::RevealEmptyArea(int x, int y) {
    for (int di = -1; di <= 1; di++) {
        for (int dj = -1; dj <= 1; dj++) {
            if (di == 0 && dj == 0) continue;
            
            int ni = y + di;
            int nj = x + dj;
            
            if (ni >= 0 && ni < height && nj >= 0 && nj < width) {
                if (tiles[ni][nj] == TileState::Hidden) {
                    RevealTile(nj, ni);
                }
            }
        }
    }
}

void GameBoard::ToggleFlag(int x, int y) {
    if (tiles[y][x] == TileState::Hidden) {
        tiles[y][x] = TileState::Flagged;
        flagCount++;
    } else if (tiles[y][x] == TileState::Flagged) {
        tiles[y][x] = TileState::Question;
        flagCount--;
    } else if (tiles[y][x] == TileState::Question) {
        tiles[y][x] = TileState::Hidden;
    }
}

bool GameBoard::CheckWin() {
    return revealedCount == (width * height - mineCount);
}

void GameBoard::Reset() {
    revealedCount = 0;
    flagCount = 0;
    state = GameState::Ready;
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            tiles[i][j] = TileState::Hidden;
            mines[i][j] = false;
            numbers[i][j] = 0;
        }
    }
}

TileState GameBoard::GetTileState(int x, int y) const {
    if (x < 0 || x >= width || y < 0 || y >= height) return TileState::Hidden;
    return tiles[y][x];
}

int GameBoard::GetTileNumber(int x, int y) const {
    if (x < 0 || x >= width || y < 0 || y >= height) return 0;
    return numbers[y][x];
}

bool GameBoard::IsMine(int x, int y) const {
    if (x < 0 || x >= width || y < 0 || y >= height) return false;
    return mines[y][x];
}
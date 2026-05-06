#pragma once
#include "GameBoard.h"
#include <string>

class MinesweeperGame {
private:
    GameBoard* board;
    Difficulty difficulty;
    bool isFirstClick;
    int gameTime;
    int timerId;
    HWND hWnd;
    
    // Game constants for different difficulties
    struct DifficultySettings {
        int width;
        int height;
        int mines;
    };
    
    static const DifficultySettings difficultySettings[];
    
    // Window procedure
    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    
    // Game event handlers
    void OnPaint();
    void OnTimer();
    void OnLeftClick(int x, int y);
    void OnRightClick(int x, int y);
    void OnNewGame();
    void OnDifficultyChange(Difficulty newDifficulty);
    
    // Drawing helpers
    void DrawTile(HDC hdc, int x, int y, TileState state, int number);
    void DrawFace(HDC hdc, bool happy);
    void DrawNumbers(HDC hdc);
    void DrawTimer(HDC hdc);
    void DrawMineCount(HDC hdc);
    
public:
    MinesweeperGame();
    ~MinesweeperGame();
    
    // Game initialization
    bool Initialize(HINSTANCE hInstance);
    
    // Game control
    void Start();
    void Stop();
    void Reset();
    
    // Difficulty management
    Difficulty GetDifficulty() const { return difficulty; }
    void SetDifficulty(Difficulty newDifficulty);
    
    // Game state
    GameState GetGameState() const { return board->GetState(); }
    int GetRemainingMines() const { return board->GetRemainingMines(); }
    int GetGameTime() const { return gameTime; }
    
    // Window management
    HWND GetWindowHandle() const { return hWnd; }
    void SetWindowHandle(HWND hwnd) { hWnd = hwnd; }
    
    // Message handling
    LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
};
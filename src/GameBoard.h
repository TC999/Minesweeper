#pragma once

// Game difficulty levels
enum class Difficulty {
    Beginner,    // 9x9, 10 mines
    Intermediate, // 16x16, 40 mines
    Expert,      // 30x16, 99 mines
    Custom       // User-defined
};

// Tile states
enum class TileState {
    Hidden,      // Not revealed
    Revealed,    // Revealed and empty or with number
    Flagged,     // Marked with flag
    Question,    // Marked with question
    Exploded     // Mine that was clicked
};

// Game states
enum class GameState {
    Ready,       // Game started but not playing
    Playing,     // Game in progress
    Won,         // Player won
    Lost         // Player lost
};

// Game board class
class GameBoard {
private:
    int width;
    int height;
    int mineCount;
    int revealedCount;
    int flagCount;
    TileState** tiles;
    bool** mines;
    int** numbers;
    GameState state;
    
    void InitializeBoard();
    void PlaceMines();
    void CalculateNumbers();
    void RevealTile(int x, int y);
    void RevealEmptyArea(int x, int y);
    bool CheckWin();
    void ToggleFlag(int x, int y);
    
public:
    GameBoard(int w, int h, int mines);
    ~GameBoard();
    
    // Game operations
    void StartNewGame();
    void ClickTile(int x, int y, bool rightClick = false);
    void Reset();
    
    // Getters
    int GetWidth() const { return width; }
    int GetHeight() const { return height; }
    int GetMineCount() const { return mineCount; }
    int GetRevealedCount() const { return revealedCount; }
    int GetFlagCount() const { return flagCount; }
    GameState GetState() const { return state; }
    TileState GetTileState(int x, int y) const;
    int GetTileNumber(int x, int y) const;
    bool IsMine(int x, int y) const;
    
    // Utility
    int GetRemainingMines() const { return mineCount - flagCount; }
};
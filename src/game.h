#pragma once

#include "grid.h"
#include "blocks.h"

/*
 * Klasa odpowiedzialna za logikę gry.
 */
class Game
{
public:
    /* The game grid. */
    Grid grid;
    
    bool gameOver;  // Flag indicating whether the game is over.
    int score;      // The player's score.

    /*
     * @brief   Constructor for the Game class.
     */
    Game(void);

    /*
     * @brief   Gets a random block.
     * @return  A randomly chosen block.
     */
    Block GetRandomBlock(void);

    /*
     * @brief   Gets all available blocks.
     * @return  A vector containing all available blocks.
     */
    std::vector<Block> GetAllBlock(void);

    /*
     * @brief   Draws the game on the screen.
     */
    void Draw(void);

    /*
     * @brief   Handles user input.
     */
    void HandleInput(void);

    /*
     * @brief   Moves the current block to the left.
     */
    void MoveBlockLeft(void);

    /*
     * @brief   Moves the current block to the right.
     */
    void MoveBlockRight(void);

    /*
     * @brief   Moves the current block down.
     */
    void MoveBlockDown(void);

private:
    /* Vector containing all available block types. */
    std::vector<Block> blocks;
    
    Block currentBlock;     // The current block in play.
    Block nextBlock;        // The next block to appear.
    
    /*
     * @brief   Rotates the current block.
     */
    void RotateBlock(void);

    /*
     * @brief   Locks the current block in place.
     */
    void LockBlock(void);

    /*
     * @brief   Checks if the current block fits within the grid.
     * @param   block   The block to check.
     * @return  true    If the block fits.
     *          false   If the block doesn't fits.
     */
    bool BlockFits(Block block);

    /*
     * @brief   Checks if the current block is outside the grid.
     * @return  true    If the block is outside.
     *          false   If the block is not outside.
     */
    bool IsBlockOutside(void);

    /*
     * @brief   Updates the player's score based on the number of lines cleared.
     * @param   inesCleared     The number of lines cleared.
     */
    void UpdateScore(int linesCleared);

    /*
     * @brief   Resets the game.
     */
    void Reset(void);
};
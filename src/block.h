#pragma once

#include <vector>
#include <map>

#include "position.h"
#include "colors.h"
#include "utilities.h"

/**
 * The Block class represents a block in the game.
 * It is the base class for specific block types.
 */
class Block
{
public:
    int id;     // The ID of the block.

    /* @brief   Map containing the block cells for each rotation state. */
    std::map<int,std::vector<Position>> cells;

    /*
     * @brief   Constructor for the Block class.
     */
    Block(void);

    /*
     * @brief   Draws the block on the screen.
     */
    void Draw(void);

    /*
     * @brief   Moves the block by the specified number of rows and columns.
     * @param   rows The number of rows to move.
     * @param   columns     The number of columns to move.
     */
    void Move(int rows, int columns);

    /*
     * @brief   Gets the positions of all cells in the block.
     * @return  A vector containing the positions of all cells in the block.
     */
    std::vector<Position> GetCellPositions();

    /*
     * @brief   Rotates the block clockwise.
     */
    void Rotate(void);

    /*
     * @brief   Undoes the last rotation of the block.
     */
    void UndoRotate(void);

private:
    int cellSize;       // The size of each cell in pixels.
    int rotationState;  // The current rotation state of the block.
    int rowOffset;      // The offset in rows for the block's position.
    int columnOffset;   // The offset in columns for the block's position.

    /* Vector containing colors for different block types. */
    std::vector<Color> colors;
};
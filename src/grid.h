#pragma once

#include <vector>
#include <raylib.h>

#include "colors.h"
#include "utilities.h"

class Grid
{
public:
    /* The grid containing cell values */
    int grid[CELLS_ROWS][CELSS_COLUMNS];

    /*
     * @brief   Constructor for the Grid class.
     */
    Grid(void);

    /*
     * @brief   Initializes the game grid.
     */
    void Initialize(void);

    /*
     * @brief   Draws the game grid on the screen.
     */
    void Draw(void);

    /*
     * @brief   Checks if a cell at the specified coordinates is outside the game area.
     * @param   row     The row number of the cell.
     * @param   column  The column number of the cell.
     * @return  true    If the cell is outside the game area.
     *          false   If the cell is not outside the game area.
     */
    bool IsCellOutside(int row, int column);

    /*
     * @brief   Checks if a cell at the specified coordinates is empty.
     * @param   row     The row number of the cell.
     * @param   column  The column number of the cell.
     * @return  true    If the cell is empty.
     *          false   If the cell is not empty.
     */
    bool IsCellEmpty(int row, int column);

    /*
     * @brief   Clears full rows from the game grid.
     * @return  The number of cleared full rows.
     */
    int ClearFullRows(void);

private:  
    int numRows;        // The number of rows in the grid.
    int numCols;        // The number of columns in the grid.
    int cellSize;       // The size of each cell in pixels.

    /* Vector containing colors for different cell values. */
    std::vector<Color> colors;

    /*
     * @brief   Checks if a given row is full.
     * @param   row     The row number to check.
     * @return  true    If the row is full.
     *          false   If the row is not full.
     */
    bool IsRowFull(int row);

    /*
     * @brief   Clears a given row.
     * @param   row     The row number to clear.
     */
    void ClearRow(int row);

    /*
     * @brief   Moves a row down by a specified number of positions.
     * @param   row     The row number to move.
     * @param   numRows The number of rows to move down.
     */
    void MoveRowDown(int row, int numRows);
};
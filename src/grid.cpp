#include "grid.h"


Grid::Grid(void)
{
    numRows = CELLS_ROWS;
    numCols = CELSS_COLUMNS;
    cellSize = CELL_SIZE;
    Initialize();
    colors = GetCellColors();
}

void Grid::Initialize(void)
{
    for (int row = 0; row < numRows; row++)
    {
        for (int column = 0; column < numCols; column++)
        {
            grid[row][column] = 0;
        }
    }
}

void Grid::Draw(void)
{
    for (int row = 0; row < numRows; row++)
    {
        for (int column = 0; column < numCols; column++)
        {
            int cellValue = grid[row][column];
            DrawRectangle(column * cellSize + 1 + 10, row * cellSize + 1 + 10, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}

bool Grid::IsCellOutside(int row, int column)
{
    if (row >= 0 && row < numRows && column >= 0 && column < numCols)
    {
        return false;
    }
    return true;
}

bool Grid::IsCellEmpty(int row, int column) {
    if (grid[row][column] == 0)
    {
        return true;
    }
    return false;
}

int Grid::ClearFullRows(void)
{
    int completed = 0;
    for(int row = numRows-1; row>=0; row--) {
        if(IsRowFull(row)) {
            ClearRow(row);
            completed++;
        } else if( completed > 0) {
            MoveRowDown(row, completed);
        }
    }
    return completed;
}

bool Grid::IsRowFull(int row)
{
    for(int column = 0; column < numCols; column++) {
        if(grid[row][column] == 0) {
            return false;
        }
    }
    return true;
}

void Grid::ClearRow(int row)
{
    for(int column = 0; column < numCols; column++) {
        grid[row][column] = 0;
    }
}

void Grid::MoveRowDown(int row, int numRows)
{
    for(int column = 0; column < numCols; column++) {
        grid[row+numRows][column] = grid[row][column];
        grid[row][column] = 0;
    }
}
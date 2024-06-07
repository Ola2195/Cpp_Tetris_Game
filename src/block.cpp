#include "block.h"

Block::Block(void)
{
    cellSize = CELL_SIZE;
    rotationState = 0;
    rowOffset = 0;
    columnOffset = 0;
    colors = GetCellColors();
}

void Block::Draw(void)
{
    std::vector<Position> tiles = GetCellPositions();
    for (Position item : tiles)
    {
        DrawRectangle(item.column * cellSize + 1 + MARGIN, item.row * cellSize + 1 + MARGIN, cellSize - 1, cellSize - 1, colors[id]);
    }
}

void Block::Move(int rows, int columns)
{
    rowOffset += rows;
    columnOffset += columns;
}

std::vector<Position> Block::GetCellPositions(void)
{
    std::vector<Position> tiles = cells[rotationState];
    std::vector<Position> moveTiles;

    for (Position item : tiles)
    {
        Position newPos = Position(item.row + rowOffset, item.column + columnOffset);
        moveTiles.push_back(newPos);
    }
    return moveTiles;
}

void Block::Rotate(void)
{
    rotationState++;
    if (rotationState == (int)cells.size())
    {
        rotationState = 0;
    }
}

void Block::UndoRotate(void)
{
    rotationState--;
    if (rotationState == -1)
    {
        rotationState = cells.size() - 1;
    }
}

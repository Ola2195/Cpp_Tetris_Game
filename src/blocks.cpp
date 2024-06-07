#include "blocks.h"

LBlock::LBlock(void)
{
    id = 1;
    cells[0] = {Position(0, 2), Position(1, 0), Position(1, 1), Position(1, 2)};
    cells[1] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 2)};
    cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 0)};
    cells[3] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(2, 1)};
    Move(0,3);
}

JBlock::JBlock(void)
{
    id = 2;
    cells[0] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(1, 2)};
    cells[1] = {Position(0, 1), Position(0, 2), Position(1, 1), Position(2, 1)};
    cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 2)};
    cells[3] = {Position(0, 1), Position(1, 1), Position(2, 0), Position(2, 1)};
    Move(0,3);
}

IBlock::IBlock(void)
{

    id = 3;
    cells[0] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 3)};
    cells[1] = {Position(0, 2), Position(1, 2), Position(2, 2), Position(3, 2)};
    cells[2] = {Position(2, 0), Position(2, 1), Position(2, 2), Position(2, 3)};
    cells[3] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(3, 1)};
    Move(-1,3);
}

OBlock::OBlock(void)
{
    id = 4;
    cells[0] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
    Move(0,4);
}

SBlock::SBlock(void)
{
    id = 5;
    cells[0] = {Position(0, 1), Position(0, 2), Position(1, 0), Position(1, 1)};
    cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 2)};
    cells[2] = {Position(1, 1), Position(1, 2), Position(2, 0), Position(2, 1)};
    cells[3] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(2, 1)};
    Move(0,3);
}

TBlock::TBlock(void)
{
    id = 6;
    cells[0] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(1, 2)};
    cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 1)};
    cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 1)};
    cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 1)};
    Move(0,3);
}

ZBlock::ZBlock(void)
{
    id = 7;
    cells[0] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(1, 2)};
    cells[1] = {Position(0, 2), Position(1, 1), Position(1, 2), Position(2, 1)};
    cells[2] = {Position(1, 0), Position(1, 1), Position(2, 1), Position(2, 2)};
    cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 0)};
    Move(0,3);
}

#include "game.h"
#include <random>

Game::Game(void)
{
    grid = Grid();
    blocks = GetAllBlock();
    currentBlock = GetRandomBlock();
    nextBlock = GetRandomBlock();
    gameOver = false;
    score = 0;
}

Block Game::GetRandomBlock(void)
{
    if (blocks.empty())
    {
        blocks = GetAllBlock();
    }
    int randomIndex = rand() % blocks.size();
    Block block = blocks[randomIndex];
    blocks.erase(blocks.begin() + randomIndex);
    return block;
}

std::vector<Block> Game::GetAllBlock(void)
{
    return {IBlock(), JBlock(), LBlock(), OBlock(), SBlock(), TBlock(), ZBlock()};
}

void Game::Draw()
{
    grid.Draw();
    currentBlock.Draw();
}

void Game::HandleInput(void)
{
    int keyPressed = GetKeyPressed();
    if (gameOver && keyPressed != 0)
    {
        gameOver = false;
        Reset();
    }
    switch (keyPressed)
    {
    case KEY_LEFT:
        MoveBlockLeft();
        break;
    case KEY_RIGHT:
        MoveBlockRight();
        break;
    case KEY_DOWN:
        MoveBlockDown();
        break;
    case KEY_UP:
        RotateBlock();
        break;
    }
}

void Game::MoveBlockLeft(void)
{
    if (!gameOver)
    {
        currentBlock.Move(0, -1);
        if (IsBlockOutside() || !BlockFits(currentBlock))
            currentBlock.Move(0, 1);
    }
}

void Game::MoveBlockRight(void)
{
    if (!gameOver)
    {
        currentBlock.Move(0, 1);
        if (IsBlockOutside() || !BlockFits(currentBlock))
            currentBlock.Move(0, -1);
    }
}

void Game::MoveBlockDown(void)
{
    if (!gameOver)
    {
        currentBlock.Move(1, 0);
        if (IsBlockOutside() || !BlockFits(currentBlock))
        {
            currentBlock.Move(-1, 0);
            LockBlock();
        }
    }
}

void Game::RotateBlock(void)
{
    currentBlock.Rotate();
    if (IsBlockOutside() || !BlockFits(currentBlock))
    {
        currentBlock.UndoRotate();
    }
}

void Game::LockBlock(void)
{
    std::vector<Position> tiles = currentBlock.GetCellPositions();
    for (Position item : tiles)
    {
        grid.grid[item.row][item.column] = currentBlock.id;
    }
    if (BlockFits(nextBlock) == false)
    {
        gameOver = true;
    } else {
        currentBlock = nextBlock;
        nextBlock = GetRandomBlock();
    }
    int rowsCleared = grid.ClearFullRows();
    UpdateScore(rowsCleared);
}

bool Game::BlockFits(Block block)
{
    std::vector<Position> tiles = block.GetCellPositions();
    for (Position item : tiles)
    {
        if (!grid.IsCellEmpty(item.row, item.column))
        {
            return false;
        }
    }
    return true;
}

bool Game::IsBlockOutside()
{
    std::vector<Position> tiles = currentBlock.GetCellPositions();
    for (Position item : tiles)
    {
        if (grid.IsCellOutside(item.row, item.column))
        {
            return true;
        }
    }
    return false;
}

void Game::UpdateScore(int linesCleared)
{
    score += linesCleared*10;
}

void Game::Reset(void)
{
    grid.Initialize();
    blocks = GetAllBlock();
    currentBlock = GetRandomBlock();
    nextBlock = GetRandomBlock();
    score = 0;
}
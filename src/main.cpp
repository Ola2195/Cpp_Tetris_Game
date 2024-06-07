#include <iostream>
#include <raylib.h>

#include "game.h"
#include "utilities.h"
#include "colors.h"

int main()
{
    int width = CELL_SIZE * CELSS_COLUMNS + MARGIN * 2;
    int height = CELL_SIZE * CELLS_ROWS + MARGIN * 3 + TEXT_SIZE;
    InitWindow(width, height, "Tetris");
    SetTargetFPS(60);

    Game game = Game();

    while (!WindowShouldClose())
    {
        game.HandleInput();
        if (EventTriggered(0.2))
        {
            game.MoveBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkBlue);

        char scoreText[10];
        sprintf(scoreText, "Wynik:  %i", game.score);
        DrawText(scoreText, MARGIN, CELL_SIZE * CELLS_ROWS + MARGIN * 2, TEXT_SIZE, WHITE);

        if (game.gameOver)
        {
            DrawText("GAME OVER", width / 2, CELL_SIZE * CELLS_ROWS + MARGIN * 2, TEXT_SIZE, WHITE);
        }

        game.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
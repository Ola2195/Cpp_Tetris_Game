#pragma once

#define CELL_SIZE       30  //  Size of each cell in the grid (in pixels)
#define CELLS_ROWS      20  //  Number of rows in the game grid
#define CELSS_COLUMNS   10  //  Number of columns in the game grid
#define MARGIN          10  //  Margin in pixels
#define TEXT_SIZE       20  //  Text size for the score

double lastUpdateTime = 0;  // Time of the last update event.

/*
 * @brief   Check if a certain interval of time has passed since the last event trigger.
 * @param   interval    The interval in seconds.
 * @return  true        If the interval has passed.
 *          false       If the interval has not passed.
 */
bool EventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}
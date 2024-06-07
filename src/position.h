#pragma once

class Position
{
public:
    int row;    // Row number
    int column; // Column number

    /*
     * @brief   Constructor for the Position class.
     * @param   row     Row number.
     * @param   column  Column number.
     */
    Position(int row, int column) : row(row), column(column) {};
};
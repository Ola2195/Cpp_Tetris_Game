#pragma once

#include <raylib.h>
#include <vector>

/*
 * Colors used for drawing.
 */
static const Color darkBlue = {28, 61, 107, 255};
static const Color darkGrey = {26, 31, 40, 255};
static const Color green = {47, 230, 23, 255};
static const Color red = {232, 18, 18, 255};
static const Color orange = {226, 116, 17, 255};
static const Color yellow = {237, 234, 4, 255};
static const Color purple = {166, 0, 247, 255};
static const Color cyan = {21, 204, 209, 255};
static const Color blue = {13, 64, 216, 255};

/*
 * @brief   Gets a vector of cell colors.
 * @return  A vector containing the predefined cell colors.
 */
static std::vector<Color> GetCellColors(void)
{
    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}
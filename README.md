# Tetris Game in C++ with Raylib

This is a simple Tetris game implemented in C++ using the Raylib library, following the tutorial [Creating Tetris in C++ with raylib - Beginner Tutorial (OOP)](https://youtu.be/wVYKG_ch4yM?si=Hv_jHaj8Sf4o5daj) The game follows the classic Tetris gameplay, where players manipulate falling tetrominoes, moving them sideways and rotating them, with the goal of creating horizontal lines without gaps. When a line is completed, it disappears, and any blocks above it fall down to fill the space.

## Features

- **Tetromino Movement**: Control the movement of falling tetrominoes using arrow keys.
- **Tetromino Rotation**: Rotate the falling tetrominoes clockwise using the up arrow key.
- **Line Clearing**: Clear completed horizontal lines to score points and make room for more tetrominoes.
- **Scoring System**: Keep track of the score based on the number of lines cleared.
- **Game Over State**: The game ends when the stack of tetrominoes reaches the top of the game board.

## Implementation Details

The project uses the [Raylib C++ Starter Template](https://github.com/educ8s/Raylib-CPP-Starter-Template-for-VSCODE) for Visual Studio Code on Windows. It works with Raylib version 4.5 and has been tested on both Windows 10 and Windows 11.

The project is organized into the following files:

- **main.cpp**: Contains the main entry point of the program and the game loop.
- **utilities.h**: Defines utility functions and global variables used throughout the game, including event handling and timing.
- **position.h**: Defines the Position class to represent positions on the game board.
- **colors.h**: Defines predefined colors used for rendering.
- **blocks.h** and **blocks.cpp**: Define classes representing different tetromino shapes (L, J, I, O, S, T, Z).
- **block.h** and **block.cpp**: Define the Block class responsible for handling the behavior and rendering of individual tetrominoes.
- **grid.h** and **grid.cpp**: Define the Grid class responsible for managing the game board and line clearing.
- **game.h** and **game.cpp**: Define the Game class responsible for managing game logic, including input handling, scoring, and game over state.

## How to Build and Run

To build and run the game:

1. Clone the repository to your local machine.
2. Open the project using Visual Studio Code.
3. Build the project using a C++ compiler with support for C++11 or later.
4. Run the compiled executable to start the game.

## Dependencies

This project uses the [Raylib](https://www.raylib.com/) library for graphics and window management.

# pong
trying to create an android pong app in pure c.
Work in progress at the moment.

# Pong (Basic Raylib Example)

This is a very basic Pong game example created using the Raylib library. It initializes a window to the size of your primary monitor, sets the target FPS to 60, draws a static white line horizontally across the middle of the screen, and displays the current frames per second (FPS) in the top-left corner.

## Prerequisites

* **Raylib Library:** You need to have the Raylib library installed and properly linked with your development environment. Follow the official Raylib installation guide for your operating system.
* **C Compiler:** A C compiler (like GCC for Linux/macOS/Windows) is required to compile the source code.

## How to Compile and Run

1.  **Save the Code:** Save the provided C code as `pong.c`.

2.  **Compile:** Open your terminal or command prompt and navigate to the directory where you saved `pong.c`. Use a command similar to the following to compile the code, ensuring you link against the Raylib library and any necessary dependencies for your system (e.g., OpenGL on Linux/macOS, and OpenGL, GDI, winmm on Windows with MinGW):

    **For Linux/macOS:**
    ```bash
    gcc pong.c -o pong -lraylib -lm
    ```

    **For Windows (using MinGW):**
    ```bash
    gcc pong.c -o pong -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
    ```
    (Adjust the `-L lib/` path if your `libraylib.a` is in a different location).

3.  **Run:** After successful compilation, execute the game:

    **Linux/macOS:**
    ```bash
    ./pong
    ```

    **Windows:**
    ```bash
    pong.exe
    ```

## Code Explanation

* **`#include "raylib.h"`:** Includes the Raylib header file, providing access to its functions.
* **`GetMonitorWidth(0)` and `GetMonitorHeight(0)`:** These functions retrieve the width and height of the primary monitor.
* **`InitWindow(screenWidth, screenHeight, "Pong")`:** Initializes a Raylib window with the full screen dimensions and sets the title to "Pong".
* **`SetTargetFPS(60)`:** Sets the desired frame rate of the application to 60 frames per second.
* **`while(!WindowShouldClose())`:** This is the main game loop. It continues until the user attempts to close the window (e.g., by pressing the close button or ESC).
* **`BeginDrawing()`:** Starts the drawing process for the current frame.
* **`ClearBackground(BLACK)`:** Clears the entire window and sets the background color to black.
* **`DrawLine(200, 200, 800, 200, WHITE)`:** Draws a white horizontal line from the coordinates (200, 200) to (800, 200). The position of this line is fixed.
* **`DrawFPS(10, 10)`:** Draws the current frames per second in the top-left corner of the window (at coordinates 10, 10).
* **`EndDrawing()`:** Finishes the drawing process and presents the frame to the screen.
* **`CloseWindow()`:** Closes the Raylib window and releases resources when the game loop ends.

## Further Development

This is a very basic starting point for a Pong game. To create a fully playable game, you would need to add:

* Paddles for both players.
* A ball that moves and bounces.
* Player input to control the paddles.
* Collision detection between the ball, paddles, and screen edges.
* Scoring system.
* Game logic to handle rounds and game over conditions.

Enjoy building your Pong game with Raylib!

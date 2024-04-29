#include <raylib.h>
#include "grid.hpp"

int main()
{
    Color GREY = {29,29,29,255};
    const int WINDOW_WIDTH = 750;
    const int WINDOW_HEIGHT = 750;
    const int CELL_Size = 25;
    int FPS = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    Grid grid(WINDOW_WIDTH,WINDOW_HEIGHT, CELL_Size);
    SetTargetFPS(FPS);
    grid.SetValue(0,0,1);

    while(WindowShouldClose() == false)
    {
        //Event Handling

        //Updating State

        //Drawing
        BeginDrawing();
        ClearBackground(GREY);
        grid.Draw();
        EndDrawing();

    }
    CloseWindow();
        
}
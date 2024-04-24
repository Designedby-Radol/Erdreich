#include <stdio.h>
#include "raylib.h"
#include <iostream>

int main(void){
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    InitWindow(screenHeight, screenWidth,"raylib [core] example - basic window");
    SetTargetFps(60);
    while (!WindoShouldClose())
    {
        BeingDrawing();
            ClearBackground(RAYWHTE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
#include <iostream>
#include <raylib.h>

using namespace std;

Color green = {173, 204,96,255};
Color darkGreen = {43,51,24,255};

int main () {

    const int screenWidth = 750;
    const int screenHeight = 750;

    InitWindow(screenWidth, screenHeight, "Retro Snake Game");
    SetTargetFPS(60);

    while (WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(green);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
#include <iostream>
#include <raylib.h>

using namespace std;

Color green = {173, 204,96,255};
Color darkGreen = {43,51,24,255};

int cellSize = 30;
int cellCount = 25;

class Food
{
    public:
    Vector2 position = {5,6};
    Texture2D texture;

    Food()
    {
        Image image =LoadImage("Graphics/food.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);
        position = GenerateRandomPos();
    }
    ~Food()
    {
        UnloadTexture(texture);
    }

    //Can Access position.x, position.y    

    void Draw()
    {
        DrawTexture(texture,position.x*cellSize,position.y*cellSize,WHITE);
    }
    Vector2 GenerateRandomPos()
    {
        float x = GetRandomValue(0, cellCount -1);
        float y = GetRandomValue(0, cellCount-1);
        return Vector2{x,y};
    }

};

int main () {

    InitWindow(cellSize*cellCount, cellSize*cellCount, "Retro Snake Game");
    SetTargetFPS(60);

    Food food = Food();

    while (WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(green);
        food.Draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
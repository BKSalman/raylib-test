#include <raylib.h>

int main(void)
{
    const int screenWidth = 1080;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Test");

    SetTargetFPS(144);

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(BLACK);

            DrawText("Wow, this is a test", 300, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

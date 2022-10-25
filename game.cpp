
#include "raylib.h"

int main() {
    int screenWidth = 800;
    int screenHeight = 480;

    const char* windowTitle = "Season Slide";

    InitWindow(screenWidth, screenHeight, windowTitle);

    SetTargetFPS(60);

    const char* Msg = "RayLib x C++";

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText(Msg, 200, 240, 50, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();

    return 0;
}

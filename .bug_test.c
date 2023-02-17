#include "Dependencies/RayLib/include/raylib.h"

int main() {
  InitWindow(800, 600, "ciao");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(WHITE);

    DrawRectangleV((Vector2){.x=0, .y=0}, (Vector2){.x=50, .y=50}, BLACK);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
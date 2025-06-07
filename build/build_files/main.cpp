#include "raylib.h"

int main()
{
	const int screenWidth = 800;
	const int screenHeight = 600;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60); // Set our game to run at 60 frames-per-second

	while (!WindowShouldClose()) // Detect window close button or ESC key
	{
		BeginDrawing();

		ClearBackground(BLACK);

		DrawText("Congratulations! You created your first window!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
	}

	CloseWindow(); // Close window and OpenGL context

	return 0;
}
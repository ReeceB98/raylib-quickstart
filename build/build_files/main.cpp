#include "raylib.h"
#include "SceneManager.h"

int main()
{
	const int screenWidth = 1280;
	const int screenHeight = 720;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60); // Set our game to run at 60 frames-per-second

	SceneManager sceneManager; // Create an instance of SceneManager

	while (!WindowShouldClose()) // Detect window close button or ESC key
	{
		BeginDrawing();

		sceneManager.CurrentScene(); // Call the CurrentScene method to handle screen logic

		EndDrawing();
	}

	CloseWindow(); // Close window and OpenGL context

	return 0;
}
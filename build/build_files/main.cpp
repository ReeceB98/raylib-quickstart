#include "raylib.h"
#include "Grid.h"

typedef enum gameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } gameScreen;

int main()
{
	const int screenWidth = 800;
	const int screenHeight = 600;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	gameScreen currentScreen = LOGO; // Current game screen

	SetTargetFPS(60); // Set our game to run at 60 frames-per-second

	int frameCounter = 0; // Frame counter to switch screens

	//Texture2D texture = LoadTexture("src/Grid.png"); // Load a texture (optional, not used in this example)
	Grid grid; // Create a Grid object to manage the grid texture

	while (!WindowShouldClose()) // Detect window close button or ESC key
	{
		BeginDrawing();

		frameCounter++; // Increment frame counter

		switch (currentScreen)
		{
		case LOGO:
			ClearBackground(BLACK);
			//DrawText("LOGO SCREEN", 190, 200, 20, LIGHTGRAY);

			if (frameCounter > 120)
			{
				currentScreen = TITLE;
			}

			//DrawTexture(texture, (screenWidth - texture.width) / 2, (screenHeight - texture.height) / 2, WHITE);
			 grid.DrawGrid(); // Draw the grid texture using the Grid class

			break;

		case TITLE:
			ClearBackground(GREEN);
			DrawText("TITLE SCREEN", 190, 200, 20, LIGHTGRAY);

			if (frameCounter > 240)
			{
				currentScreen = GAMEPLAY;
			}
			break;

		case GAMEPLAY:
			ClearBackground(ORANGE);
			DrawText("GAMEPLAY SCREEN", 190, 200, 20, LIGHTGRAY);

			if (frameCounter > 360)
			{
				currentScreen = ENDING;
			}
			break;

		case ENDING:
			ClearBackground(RED);
			DrawText("ENDING SCREEN", 190, 200, 20, LIGHTGRAY);

			if (frameCounter > 480)
			{
				currentScreen = LOGO; // Loop back to the logo screen
				frameCounter = 0; // Reset frame counter
			}
			break;

		default:
			break;
		}


		EndDrawing();
	}

	//UnloadTexture(texture); // Unload texture

	CloseWindow(); // Close window and OpenGL context

	return 0;
}
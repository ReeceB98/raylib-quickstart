#include "SceneManager.h"

SceneManager::SceneManager() : currentScreen(TITLE), frameCounter(0), screenWidth(1280), screenHeight(720)
{
	// Constructor implementation
	//InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
}

SceneManager::~SceneManager()
{
	// Destructor implementation
}

void SceneManager::CurrentScene(const int screenWidth, const int screenHeight)
{
	frameCounter++; // Increment frame counter

	switch (currentScreen)
	{
	case LOGO:
		ClearBackground(BLACK);
		//DrawText("TIC TAC TOE", 250, 100, 100, WHITE);

		//if (frameCounter > 120)
		//{
		//	currentScreen = TITLE;
		//}

		//DrawTexture(texture, (screenWidth - texture.width) / 2, (screenHeight - texture.height) / 2, WHITE);
		//grid.DrawGrid(); // Draw the grid texture using the Grid class

		break;

	case TITLE:
		ClearBackground(BLACK);
		//DrawText("TITLE SCREEN", 190, 200, 20, LIGHTGRAY);
		DrawText("TIC TAC TOE", 250, 100, 100, WHITE);
		DrawText("PLAY", 450, 300, 100, WHITE);

		//if (frameCounter > 240)
		//{
		//	currentScreen = GAMEPLAY;
		//}
		break;

	case GAMEPLAY:
		ClearBackground(ORANGE);
		DrawText("GAMEPLAY SCREEN", 190, 200, 20, LIGHTGRAY);

		//if (frameCounter > 360)
		//{
		//	currentScreen = ENDING;
		//}
		break;

	case ENDING:
		ClearBackground(RED);
		DrawText("ENDING SCREEN", 190, 200, 20, LIGHTGRAY);

		//if (frameCounter > 480)
		//{
		//	currentScreen = LOGO; // Loop back to the logo screen
		//	frameCounter = 0; // Reset frame counter
		//}
		break;

	default:
		break;
	}
}

void SceneManager::GameWindow()
{
	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
}

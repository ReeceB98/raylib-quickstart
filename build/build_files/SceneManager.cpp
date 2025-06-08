#include "SceneManager.h"

SceneManager::SceneManager() : currentScreen(LOGO), frameCounter(0)
{
	// Constructor implementation
}

SceneManager::~SceneManager()
{
	// Destructor implementation
}

void SceneManager::CurrentScene()
{
	frameCounter++; // Increment frame counter

	switch (currentScreen)
	{
	case LOGO:
		ClearBackground(BLACK);
		DrawText("TIC TAC TOE", 190, 200, 100, WHITE);

		//if (frameCounter > 120)
		//{
		//	currentScreen = TITLE;
		//}

		//DrawTexture(texture, (screenWidth - texture.width) / 2, (screenHeight - texture.height) / 2, WHITE);
		//grid.DrawGrid(); // Draw the grid texture using the Grid class

		break;

	case TITLE:
		ClearBackground(GREEN);
		DrawText("TITLE SCREEN", 190, 200, 20, LIGHTGRAY);

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

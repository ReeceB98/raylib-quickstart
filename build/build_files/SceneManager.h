#pragma once
#include "raylib.h"
#include "Grid.h"

class SceneManager
{
public:

	SceneManager();
	~SceneManager();

	void CurrentScene(const int screenWidth, const int screenHeight);
	void GameWindow();

private:

	typedef enum gameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } gameScreen;

	gameScreen currentScreen;

	int frameCounter; // Frame counter to switch screens

	Grid grid; // Create a Grid object to manage the grid texture

	const int screenWidth;
	const int screenHeight;

};


#include "Grid.h"

Grid::Grid() :texture(LoadTexture("src/Grid.png"))
{
	// Constructor implementation
}

Grid::~Grid()
{
	// Destructor implementation
	UnloadTexture(texture); // Unload the texture when the Grid object is destroyed
}

void Grid::DrawGrid()
{
	// Draw the grid texture at the center of the screen
	int screenWidth = GetScreenWidth();
	int screenHeight = GetScreenHeight();
	DrawTexture(texture, (screenWidth - texture.width) / 2, (screenHeight - texture.height) / 2, WHITE);
}
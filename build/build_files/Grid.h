#pragma once
#include "raylib.h"
class Grid
{
public:

	Grid();
	~Grid();
	void DrawGrid();

private:

	Texture2D texture; // Texture for the grid
};


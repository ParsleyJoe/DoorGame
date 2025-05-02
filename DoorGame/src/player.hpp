#pragma once
#include <raylib.h>

class Player
{
private:

public:

	int posX, posY;
	Texture2D player;
	void Draw();
	Player();
	void Move();
};
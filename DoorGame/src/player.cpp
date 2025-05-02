#include "player.hpp"
#include <resource_dir.h>
#include <iostream>
#include <box2cpp/box2cpp.h>

Player::Player()
{
	// Box2d Body Initialization, Fixtures Initialization
	// Load Texture
	player = LoadTexture("Player.png");
	// Initialize Vars
	posX = 100;
	posY = 100;
	// moveForce = b2Vec2{ 20.0f, 0.0f };
}

void Player::Draw()
{
	DrawTexture(player, posX, posY, BLACK);

	// DrawRectangleLines(-playerBox.vertices->x, -playerBox.vertices->y, 20, 10, RED);
}

void Player::Move()
{
	if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
	{
		// move right
	}
	if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
	{
		// Move left
	}
}
#include "raylib.h"
#include "resource_dir.h"
#include "player.hpp"
#include <iostream>
#include <box2cpp/box2cpp.h>

b2::World world(b2::World::Params{});

int main ()
{
	// Raylib Init
	// -----------
	// Tell the window to use vsync and work on high DPI displays
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);
	InitWindow(800, 600, "Hello Raylib");
	SearchAndSetResourceDir("resources");
	SetTargetFPS(60);

	Player player;

	// game loop
	while (!WindowShouldClose())
	{
		player.Move();

		// drawing
		BeginDrawing();
			ClearBackground(GRAY);

			// draw our texture to the screen
			player.Draw();
		EndDrawing();
	}



	// cleanup
	UnloadTexture(player.player);
	CloseWindow();
	return 0;
}

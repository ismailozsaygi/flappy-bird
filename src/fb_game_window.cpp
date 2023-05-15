#include <iostream>
#include "fb_game_window.h"

bool TryInitializeGameWindow( GameWindow* gameWindow )
{
	if ( SDL_Init( SDL_INIT_VIDEO ) != 0 )
	{
		std::cout << "Failed to initialize SDL!" << std::endl;
		return false;
	}

	gameWindow->Width = 640;
	gameWindow->Height = 480;
	gameWindow->TargetFramesPerSecond = 30;

	gameWindow->SDLWindow = SDL_CreateWindow( "Flappy Bird", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		gameWindow->Width, gameWindow->Height, SDL_WINDOW_SHOWN );

	if ( gameWindow->SDLWindow == nullptr )
	{
		std::cout << "Failed to create SDL window!" << std::endl;
		return false;
	}

	gameWindow->SDLRenderer = SDL_CreateRenderer( gameWindow->SDLWindow, -1, 0 );
	if ( gameWindow->SDLRenderer == nullptr )
	{
		std::cout << "Failed to create SDL Renderer!" << std::endl;
		return false;
	}

	return gameWindow;
}

void ClearGameWindow( GameWindow* gameWindow )
{
	SDL_DestroyRenderer( gameWindow->SDLRenderer );
	SDL_DestroyWindow( gameWindow->SDLWindow );
	SDL_Quit();
}
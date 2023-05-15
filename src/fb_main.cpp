#include <iostream>
#include "fb_game_window.h"

int main( int argc, char* argv[] )
{
	GameWindow* gameWindow = new GameWindow();
	if ( TryInitializeGameWindow( gameWindow ) )
	{
		SDL_Event event;
		while ( true )
		{
			if ( SDL_PollEvent( &event ) )
			{
				if ( event.type == SDL_KEYDOWN )
				{
					if ( event.key.keysym.sym == SDLK_SPACE )
					{
						std::cout << "Space     Bar pressed!" << std::endl;
					}
				}

				if ( event.type == SDL_QUIT )
					break;
			}
		}

		delete gameWindow;
	}

	return 0;
}
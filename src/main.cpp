#include <iostream>
#include <SDL.h>

int main( int argc, char* argv[] )
{
	if ( SDL_Init( SDL_INIT_VIDEO ) != 0 )
	{
		std::cout << "Failed to initialize SDL!" << std::endl;
		return -1;
	}

	SDL_Quit();

	return 0;
}
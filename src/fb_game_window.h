#ifndef FB_GAME_WINDOW_H
#define FB_GAME_WINDOW_H

#include <SDL.h>

struct GameWindow
{
public:
	int Width;
	int Height;
	int TargetFramesPerSecond;

	SDL_Window* SDLWindow;
	SDL_Renderer* SDLRenderer;
};

bool TryInitializeGameWindow( GameWindow* gameWindow );
void ClearGameWindow( GameWindow* gameWindow );

#endif // !FB_GAME_WINDOW_H
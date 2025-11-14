#ifndef VIDEO_H
#define VIDEO_H

#include <SDL2/SDL.h>

typedef struct{
	SDL_Window *window;
	SDL_Renderer *renderer;
} Game;

void sdl_init(Game *game);
void end_game(Game *game, int exit_status);	

#endif

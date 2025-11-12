#ifndef VIDEO_H
#define VIDEO_H
#include <SDL2/SDL.h>

typedef struct{
	SDL_Window *window;
	SDL_Renderer *renderer;
} Game;

void sdl_init(Game *game, int w_res, int h_res);
#endif

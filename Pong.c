#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

#include <../Headers/Video.h>
#include <../Headers/Defs.h>

int main(void){
	Game game = {
		.renderer = NULL, 
		.window = NULL,
	};

	sdl_init(&game, WIDTH_180P, HEIGHT_180P);

	/*
	while(1){
	game_physics();
	game_controls();
	}*/

	SDL_Delay(3000);

	return true;
}

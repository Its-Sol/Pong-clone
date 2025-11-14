#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

#include <../Headers/Video.h>
#include <../Headers/Defs.h>
#include <../Headers/Controls.h>

int main(void){
	Game game = {
		.renderer = NULL, 
		.window = NULL,
	};

	Player player1 = {
		.keystate = NULL,
	};

	sdl_init(&game);

	while(1){
	game_controls(&player1);

	/*game_physics();*/

	SDL_RenderClear(game.renderer);
	SDL_RenderPresent(game.renderer);

	SDL_Delay(3000);
	}

	return true;
}

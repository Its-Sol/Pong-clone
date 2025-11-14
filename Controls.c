#include <SDL2/SDL.h>

#include "../Headers/Controls.h"

void game_controls(Player *player){
	if(player->keystate[SDL_SCANCODE_UP]){
	printf("UP ABOVE!!!!!!!!!\n");		
	}
	if(player->keystate[SDL_SCANCODE_DOWN]){
	printf("GET DOWN!\n");
	}

}

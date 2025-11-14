#ifndef CONTROLS_h
#define CONTROLS_h

#include <SDL2/SDL.h>

typedef struct {
	const Uint8 *keystate;
	SDL_Texture *player_sprite;
	
	int speed;

} Player;

void game_controls(Player *player); 

#endif

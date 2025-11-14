#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdlib.h>

#include <../Headers/Video.h>

void end_game(Game *game, int exit_status){

	SDL_DestroyRenderer(game->renderer);
	SDL_DestroyWindow(game->window);

	SDL_Quit();

	exit(exit_status);
}

void sdl_init(Game *game){
	int w_res = 320, h_res = 180;
	if(SDL_Init(SDL_INIT_EVERYTHING)){
		fprintf(stderr, "Error initializing SDL: %s\n", SDL_GetError());
       		exit(1);
	}

	game->window = SDL_CreateWindow("Pong", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w_res, h_res, SDL_WINDOW_RESIZABLE);
	if(!game->window){
		fprintf(stderr, "Error creating window: %s\n", SDL_GetError());
		exit(1);
	}

	int min_w, min_h;
	SDL_SetWindowMinimumSize(game->window, w_res, h_res);
	SDL_GetWindowMinimumSize(game->window, &min_w, &min_h);

	game->renderer = SDL_CreateRenderer(game->window, -1, 0);
	if(!game->renderer){
		fprintf(stderr, "Error creating renderer: %s\n", SDL_GetError());
		exit(1);
	}

	int img_init = IMG_Init(IMG_INIT_PNG);
	if((img_init & IMG_INIT_PNG) != IMG_INIT_PNG){
		fprintf(stderr, "Error initializing SDL_Image: %s\n", IMG_GetError());
		exit(1);
	}


	SDL_Surface *app_icon = IMG_Load("../Art/Logo.png");
	if(!app_icon){
		fprintf(stderr, "Error loading app icon: %s\n", IMG_GetError());
	        exit(1);
	}	

	SDL_SetWindowIcon(game->window, app_icon);
	SDL_FreeSurface(app_icon);
}

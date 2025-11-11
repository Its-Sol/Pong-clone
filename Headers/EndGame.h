void game_cleanup(Game *game, int exit_status){

	Mix_HaltChannel(-1);
	Mix_HaltMusic();

	Mix_CloseAudio();

	TTF_Quit();
	Mix_Quit();
	IMG_Quit();
	SDL_Quit();

	SDL_DestroyWindow(game->window);
	SDL_DestroyRenderer(game->renderer);

	exit(exit_status);
}

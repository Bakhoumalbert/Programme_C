#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

void MessageErreur(const char * message);

int main(int argc, const char * argv[]){

	SDL_Window *window = NULL;
	SDL_Renderer *renderer = NULL;
	if(SDL_Init(SDL_INIT_VIDEO) != 0)
		MessageErreur("L'initialisation de la SDL a echouee");

	if(SDL_CreateWindowAndRenderer(800, 600, 0, &window, &renderer) != 0)
		MessageErreur("La creation de la fenetre et du rendu a echouee");

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	return EXIT_SUCCESS;
}

int MessageError(char * message){
	SDL_Log("ERREUR : %s > %s\n", message, SDL_GetError());
	SDL_Quit();
	exit(EXIT_FAILURE);
}


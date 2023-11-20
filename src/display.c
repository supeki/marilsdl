#include <SDL2/SDL.h>

#include "display.h"

SDL_Window* window;
SDL_Renderer* renderer;

void initDisplay() {
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow("Marilyn Badnik Blast", 0, 0, 640, 480, 0);
  	renderer = SDL_CreateRenderer(window, -1, 0);
}

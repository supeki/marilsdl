#include <SDL2/SDL.h>
#include <stdbool.h>

#include "main.h"
#include "display.h"

bool running = false;

void handleEvents(SDL_Event env) {
	switch (env.type) {
		case SDL_QUIT:
			running = false;
			break;
		default:
			break;
	}
}

int main() {
	initDisplay();
	
	running = true;
	loop();
}

void loop() {
	SDL_Event env;

	while (running) {
		while (SDL_PollEvent(&env))
			handleEvents(env);
	}
}

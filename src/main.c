#include <SDL2/SDL.h>
#include <stdbool.h>

#include "main.h"
#include "display.h"

bool running = false;

int main() {
	initDisplay();
	
	running = true;
	loop();
}

void loop() {
	while (running) {

	}
}

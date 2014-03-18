#include <stdio.h>
#include <SDL/SDL.h>
#include "pixelfuncs.h"

int main(int argc, char **argv) {
	SDL_Surface* screen = NULL;
	SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
	SDL_LockSurface(screen);
	SDL_PixelFormat* format = screen->format;
	Uint32 *pixels = (Uint32*) screen->pixels;
	for(int i = -(screen->w)/2; i < (screen->w)/2; i++) {
		for(int j = -(screen->h)/2; j < (screen->h)/2; j++) {
			Vector colours = vecGen(Vector_new(((double) i)/screen->w, ((double) j)/screen->h, 0), 1, Vector_new(0, 0, 1), Vector_new(0, 1, 0));
			pixels[(((j+screen->h/2)*screen->w)+i+screen->w/2)] = SDL_MapRGBA(format, (colours.y+0.5)*255, 0, 0, 255);
		}
	}
	SDL_UnlockSurface(screen);
	SDL_Flip(screen);
	SDL_Delay(1000);
	SDL_Quit();
	return 0;
}

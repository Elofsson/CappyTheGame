// SDLGameCmake.cpp : Defines the entry point for the application.

// This is for some reason required. This can, and should probably
// be manually linked for cleanness.
#define SDL_MAIN_HANDLED

#include <iostream>
#include "Application.h"

// Move this to wrapper class.
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

using namespace std;

int main(int argc, char **argv) {
	
	int windowWidth = 800;
	int windowHeight = 800;

	//    Init the application itself.
	Application* app = new Application(800, 800);
	if (app->init() != 0) {
		printf("Failed to initalize application.");
		return -1;
	}

	app->gameLoop();

	delete app;

	return 0;
}



	// TODO this would be great to add later in a separate class.
// Create texture.
	// --------------------------------- Load texture here -----------//
	//int req_format = STBI_rgb_alpha;
	//int width, height, orig_format;

	// Load image.
	/*unsigned char* data = stbi_load("C:/Users/ef99/Programming/Games/Images/capybara_2_high_res.jpg", &width, &height, &orig_format, req_format);

	if (data == NULL) {
		SDL_Log("Failed to load image. %s", stbi_failure_reason());
		return -1;
	}

	//Setting up pixel format color masks.
	Uint32 rmask, gmask, bmask, amask;
	#if SDL_BYTEORDER == SDL_BIG_ENDIAN
		int shift = (req_format == STBI_rgb) ? 8 : 0;
		rmask = 0xff000000 >> shift;
		gmask = 0x00ff0000 >> shift;
		bmask = 0x0000ff00 >> shift;
		amask = 0x000000ff >> shift;
	#else // little endian, like x86
		rmask = 0x000000ff;
		gmask = 0x0000ff00;
		bmask = 0x00ff0000;
		amask = (req_format == STBI_rgb) ? 0 : 0xff000000;
	#endif

	// Setting up for rgb, or rgb_alpha depending on the requested format.
	int depth, pitch;
	if (req_format == STBI_rgb) {
		depth = 24;
		pitch = 3 * width; // 3 bytes per pixel * pixels per row
	}
	else { // STBI_rgb_alpha (RGBA)
		depth = 32;
		pitch = 4 * width;
	}*/

	// FInally, Create the surface.
	//TODO Check what the masks actually is.
	//SDL_Surface* surface = SDL_CreateRGBSurfaceFrom((void*)data, width, height, depth, pitch, rmask, gmask, bmask, amask);
	//if (surface == NULL) {
		//SDL_Log("Failed to create surface %s", SDL_GetError());
		//return -1;
	//}


	//SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
	
	// Free surface and texture.
	//SDL_FreeSurface(surface);
	//stbi_image_free(data);
	//SDL_DestroyTexture(texture);
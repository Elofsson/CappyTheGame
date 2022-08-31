#include "Application.h"

Application::Application(int width, int height) {
	m_width = width;
	m_height = height;
	m_appRunning = false;
	m_renderer = NULL;
	m_window = NULL;
}

Application::~Application() {

	// Deintialize SDL2.
	SDL_Quit();

	// Free renderer.
	SDL_DestroyRenderer(m_renderer);

	// Destroy window.
	SDL_DestroyWindow(m_window);
}

int Application::init() {
	
	// Init SDL2.
	int sdl_error_code = SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
	if (sdl_error_code < 0) {
		printf("Failed to initalize SDL2");
		return -sdl_error_code;
	}

	// Init SDLWindow.
	m_window = SDL_CreateWindow("SDLGame", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, m_width, m_height, 0);

	if (m_window == NULL) {
		printf("Failed to create SDL window.");
		return -1;
	}

	// Init renderer.
	m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
	
	//Set to true so the application loop can actually run.
	m_appRunning = true;

	return 0;
}

void Application::update() {
	//Do some updates here.
}

void Application::gameLoop() {
	
	//While game not exited.
	SDL_Event e;
	while (m_appRunning) {

		//Handle input. TODO handle more inputs than just quit, 
		// and find a clean way to do so.
		// Poll all events in the queue.
		while (SDL_PollEvent(&e)) {
			if (e.type == SDL_QUIT) {
				m_appRunning = false;
			}
		}
		
		//Update.
		update();

		//Render.
		// Do some test rendering for now.
		SDL_Rect rect;
		rect.x = 100;
		rect.y = 100;
		rect.w = 400;
		rect.h = 400;

		//Set draw color for the background
		SDL_SetRenderDrawColor(m_renderer, 0, 155, 0, 155);
		SDL_RenderClear(m_renderer);

		//Set color for the rectangle.
		SDL_SetRenderDrawColor(m_renderer, 155, 0, 0, SDL_ALPHA_OPAQUE);
		SDL_RenderFillRect(m_renderer, &rect);

		//Do the actual rendering.
		SDL_RenderPresent(m_renderer);

		//This method is good for later to render with textures.
		//SDL_RenderCopy(renderer, texture, NULL, NULL);
	}
}

#include "Rectangle2D.h"

#include <stdio.h>

// For initalization.
#include <SDL.h>

// For the video window.
#include <SDL_video.h>

#pragma once

class Application {

public:
	Application(int width, int height);
	~Application();
		
	void update();
	int init();
	void gameLoop();

private:
	bool m_appRunning;
	int m_width;
	int m_height;
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;

};
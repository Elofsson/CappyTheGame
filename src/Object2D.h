#pragma once

#include <SDL.h>

class Object2D {

public:
	//Possibly, physics could be added later to this abstract class aswell.
	Object2D(unsigned int id) : Object2D{ m_id = id; }
	virtual void draw(SDL_Renderer& renderer) = 0;

private:
	unsigned int m_id;
};
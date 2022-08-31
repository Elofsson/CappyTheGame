#pragma once

#include <SDL.h>

//TODO: Create a transform class to represent the position, scale and rotatrion.
//Add a transform as a private attribute to this class with methods to apply.
//Scale, transform and rotation operations.

class Object2D {

public:
	//Possibly, physics could be added later to this abstract class aswell.
	Object2D(unsigned int id);
	virtual void draw(SDL_Renderer& renderer) = 0;

private:
	unsigned int m_id;
};
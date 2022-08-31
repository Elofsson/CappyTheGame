#pragma once

#include "Object2D.h"

class Rectangle2D : public Object2D {

public:
	Rectangle2D(unsigned int id, int x, int y, int width, int height);
	~Rectangle2D();
	void draw(SDL_Renderer& renderer) override;
	void setFill(bool filled);
	
private:
	bool m_filled;
	SDL_Rect* m_rectangle;

};
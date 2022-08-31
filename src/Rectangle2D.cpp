#include "Rectangle2D.h"


Rectangle2D::Rectangle2D(unsigned int id, int x, int y, int width, int height) : Object2D(id){
	m_rectangle = new SDL_Rect();
	m_rectangle->x = x;
	m_rectangle->y = y;
	m_rectangle->w = width;
	m_rectangle->h = height;
	m_filled = true;
}

Rectangle2D::~Rectangle2D() {
	delete m_rectangle;
}

void Rectangle2D::draw(SDL_Renderer& renderer) {
	//Draw rectangle.
	if (m_filled) {
		SDL_RenderFillRect(&renderer, m_rectangle);
	}
	else {
		SDL_RenderDrawRect(&renderer, m_rectangle);
	}
}

void Rectangle2D::setFill(bool filled) {
	m_filled = filled;
}

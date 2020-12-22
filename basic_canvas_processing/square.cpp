#include "square.h"

square::square(cord position, double height = 1, double width =1 , double border_width, color infil_color, color border_color)
{
	this->border_width = border_width;
	this->position = position;
	this->border_color = border_color;
	this->infil_color = infil_color; // inner color
	

	this->height = height;
	this->width = width;
}

#include "circle.h"

circle::circle()
{
	this->border_width = 0.1;
	this->position = cord(0,0);
	this->border_color = color(255,255,255);
	this->infil_color = color(0,0,0); // inner color
	this->radiouce = 1;
}

circle::circle(cord position, double radiouce = 1, double border_width = 0.1, color infil_color = color(0, 0, 0), color border_color = color(255, 255, 255))
{
	this->border_width = border_width;
	this->position = position;
	this->border_color = border_color;
	this->infil_color = infil_color; // inner color
	this->radiouce = radiouce;
}

circle::circle(const circle& other)
{
	this->border_width = other.border_width;
	this->position = other.position;
	this->border_color = other.border_color;
	this->infil_color = other.infil_color; // inner color
	this->radiouce = other.radiouce;


}

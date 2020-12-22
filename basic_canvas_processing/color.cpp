#include "color.h"


color::color(unsigned char r, unsigned char g, unsigned char b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}

color::color(const color& other)
{

	this->r = other.r;
	this->g = other.g;
	this->b = other.b;
}

color& color::operator=(const color& other)
{
	if (this == &other) return *this; 

	this->r = other.r;
	this->g = other.g;
	this->b = other.b;

	return *this;

}



unsigned color::gen_hash(int max_color) {
	return r *pow(256,2) + g * 256 + b;
};
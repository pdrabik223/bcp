#pragma once
#include "color.h"

struct cord {
public:
	unsigned x;
	unsigned y;
	cord() { x = 0; y = 0; }
	cord(int x, int y) { this->x = x; this->y = y; }
	cord(const cord& other) { x = other.x; y = other.y; }
};


class shape
{
public:
	shape();


protected:

	double border_width;
	cord position;
	color border_color;
	color infil_color; // inner color




};


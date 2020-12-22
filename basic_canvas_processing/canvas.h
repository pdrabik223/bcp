

#pragma once
#include <vector>
#include "color.h"


class canvas
{
	
	canvas() = delete;
	canvas(int, int, color);
	canvas(const canvas& other);



protected:
	unsigned  width;
	unsigned  height;
	std::vector<color> image; 
	std::vector<shape> overlays;

};


#include "canvas.h"

canvas::canvas(int x, int y, color background_collor = color(0,0,0))
{
	height = x;

	width = y;

	for (int i = 0; i < height * width;i++) image.push_back(background_collor);

}

canvas::canvas(const canvas& other)
{
	if (other.image.size() == image.size()) memcpy(&image, &other.image, sizeof(color));
	else for (auto i:other.image ) image.push_back(i);

	height = other.height;
	width = other.width;

	

}

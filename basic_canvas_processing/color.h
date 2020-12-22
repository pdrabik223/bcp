#pragma once
#ifndef COLOR_H
#define COLOR_H
#include <cmath>
class color
{

public:

	color() { r = 0; g = 0; b = 0; }

	color(unsigned char, unsigned char, unsigned char);


	color(const color&);

	color& operator=(const color&);


	unsigned gen_hash(int);

	unsigned char get_r() { return r; }

	unsigned char get_g() { return g; }

	unsigned char get_b() { return b; }

	void set_r(unsigned char r) { this->r = r; }

	void set_g(unsigned char g) { this->g = g; }

	void set_b(unsigned char b) { this->b = b; }



protected:
	unsigned char r, g, b;
	


};

#endif // !COLOR_H
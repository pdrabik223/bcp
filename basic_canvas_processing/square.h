#pragma once
#include "shape.h"
class square :
    public shape
{
public:
    square();
    square(cord, double, double, double, color , color);

protected:

    double height;
    double width;

};


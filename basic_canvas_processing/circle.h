#pragma once
#include "shape.h"

class circle :
    public shape
{
public:
    circle();
    circle(cord, double,double,color,color);
    circle(const circle&);


protected:
    double radiouce;


};


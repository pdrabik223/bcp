#pragma once
#include "shape.h"

class circle :
    public shape
{
    circle();
    circle(cord, double,double,color,color);
    circle(const circle&);


protected:
    double radiouce;


};


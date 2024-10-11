#pragma once
#include "Shape.h"

class Point: public Shape{
    public:
        double x,y;
        

    Point();
    ~Point();
    Point(double x, double y);
    void getCoordinates();
    void draw();

};    
#pragma once
#include "Point.h"

class Polygon: public Shape{
    public:
    Point p1,p2,p3,p4,p5;

    Polygon(Point p1, Point p2, Point p3, Point p4, Point p5);
    void getPolygon();
    void draw();
};
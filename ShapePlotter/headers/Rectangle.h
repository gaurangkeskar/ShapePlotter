#pragma once
#include <iostream>
#include <vector>
#include "Point.h"
#include "Shape.h"
using namespace std;

class Rectangle : public Shape{
    public:
        Point x1;
        double length , breadth;

        Rectangle(Point a, double length , double breadth);
        ~Rectangle();
        vector<Point> buildRectangle();
        void draw(vector<Point>);
        private:
        void draw();
};
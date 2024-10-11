#pragma once
#include "Point.h"
#include "Shape.h"
#include <vector>
using namespace std;

class Circle : public Shape{
    public:
    Circle(Point center, double radius);
    ~Circle();
    void getCircleArea();
    std::vector<Point> buildCircle();
    void draw(const std::vector<Point>& points);

private:
    Point c;  // Center of the circle
    double radius;
    void draw();
};
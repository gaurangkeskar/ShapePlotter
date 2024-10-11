#include "Polygon.h"
#include <iostream>

Polygon::Polygon(Point p1, Point p2, Point p3, Point p4, Point p5):p1(p1), p2(p2), p3(p3), p4(p4), p5(p5){}

void Polygon::getPolygon()
{
    std::cout << "Polygon's coordinates are:"
              << "(" << p1.x << p1.y << ")" 
              << "(" << p2.x << p2.y << ")" 
              << "(" << p3.x << p3.y << ")" 
              << "(" << p4.x << p4.y << ")" 
              << "(" << p5.x << p5.y << ")" << std::endl;
}
void Polygon::draw() {
    std::cout<< "Polygon is drawing " << std::endl;
};

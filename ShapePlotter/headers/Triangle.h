#pragma once
#include "Point.h"
#include "Shape.h"
#include <vector>

class Triangle : public Shape {
public:
    Triangle(Point p1, Point p2, Point p3);
    ~Triangle();
    
    void getTriangle(); 
    void draw() override; // Override from Shape
    
private:
    std::vector<Point> vertices; // To hold triangle vertices
    void storeVertices(const std::vector<Point>& points);
    std::vector<Point> calculatePoints() const; // Calculate points for drawing
};

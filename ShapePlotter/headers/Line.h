#pragma once
#include "Point.h"
#include "Shape.h"
#include <vector>

class Line : public Shape {
public:
Point p1, p2;
    Line(Point p1, Point p2);
    ~Line();
    
    void getLine(); 
    void draw() override; // Override from Shape
    
private:
    void storeVertices(const std::vector<Point>& points);
    std::vector<Point> calculatePoints() const; // Calculate points for drawing
    std::vector<Point> vertices; // To hold line vertices
};

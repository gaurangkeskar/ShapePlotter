#pragma once
#include <string>
#include "Point.h"
#include "Rectangle.h"

class Square : public Shape {
public:
    Point p1;
    double side;
    Square(Point p1, double side);
    ~Square();
    
    std::string getSquare(); // Optionally for getting square info
    void draw() override; // Override from Shape

private:
    Rectangle rectangle; // Use Rectangle to handle the square's functionality
};

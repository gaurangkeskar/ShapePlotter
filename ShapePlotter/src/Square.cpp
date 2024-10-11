#include <iostream>
#include "Square.h"
#include "Writer.h" 
using namespace std;

Square::Square(Point p1, double side)
    : p1(p1), side(side), rectangle(p1, side, side) {} // Initialize Rectangle with equal length and breadth

Square::~Square() {}

std::string Square::getSquare() {
    return "Square with side length: " + std::to_string(side);
}

void Square::draw() {
    // Use the rectangle's draw method to draw the square
    vector<Point> points = rectangle.buildRectangle(); // Build points using Rectangle's method
    points.push_back(points.front()); // Close the square by adding the first point again

    // Output the square points to a file
    Writer w; 
    string data;
    for (const auto& point : points) {
        data.append(to_string(point.x) + " " + to_string(point.y) + "\n");
    }
    w.write(data);
    cout << ".dat file has been saved in your folder." << endl;
}

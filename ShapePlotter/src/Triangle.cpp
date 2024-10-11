#include <iostream>
#include "Triangle.h"
#include "Writer.h" 
using namespace std;

Triangle::Triangle(Point p1, Point p2, Point p3) {
    vertices.push_back(p1);
    vertices.push_back(p2);
    vertices.push_back(p3);
}

Triangle::~Triangle() {}

void Triangle::storeVertices(const std::vector<Point>& points) {
    vertices = points;
}

void Triangle::getTriangle() {
    Point p1, p2, p3;
    cout << "Enter the first point (x y) of the triangle: ";
    cin >> p1.x >> p1.y;

    cout << "Enter the second point (x y) of the triangle: ";
    cin >> p2.x >> p2.y;

    cout << "Enter the third point (x y) of the triangle: ";
    cin >> p3.x >> p3.y;

    storeVertices({p1, p2, p3});
}

std::vector<Point> Triangle::calculatePoints() const {
    return vertices; // Return the vertices for drawing
}

void Triangle::draw() {
    // Get the points to draw the triangle
    vector<Point> points = calculatePoints();
    
    // Close the triangle by adding the first point again
    points.push_back(points.front());

    // Output the triangle points to a file
    Writer w; 
    string data;
    for (const auto& point : points) {
        data.append(to_string(point.x) + " " + to_string(point.y) + "\n");
    }
    w.write(data);
    cout << ".dat file has been saved in your folder." << endl;
}

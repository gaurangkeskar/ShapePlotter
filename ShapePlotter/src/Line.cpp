#include <iostream>
#include "Line.h"
#include "Writer.h"
using namespace std;

Line::Line(Point p1, Point p2) : p1(p1), p2(p2) {
    storeVertices({p1, p2});
}

Line::~Line() {}

void Line::storeVertices(const std::vector<Point>& points) {
    vertices = points;
}

void Line::getLine() {
    Point p1, p2;
    cout << "Enter the first point (x y) of the line: ";
    cin >> p1.x >> p1.y;

    cout << "Enter the second point (x y) of the line: ";
    cin >> p2.x >> p2.y;

    storeVertices({p1, p2});
}

std::vector<Point> Line::calculatePoints() const {
    return vertices; // Return the vertices for drawing
}

void Line::draw() {
    // Get the points to draw the line
    vector<Point> points = calculatePoints();

    // Output the line points to a file
    Writer w; 
    string data;
    for (const auto& point : points) {
        data.append(to_string(point.x) + " " + to_string(point.y) + "\n");
    }
    w.write(data);
    cout << ".dat file has been saved in your folder." << endl;
}

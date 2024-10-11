#include <iostream>
#include <cmath> // For cos and sin functions
#include "Circle.h"
#include "Writer.h"
#define PI 3.14
#define M_PI 3.14159265358979323846

Circle::Circle(Point center, double r) : c(center), radius(r) {}

Circle::~Circle() {}

void Circle::getCircleArea() {
    double area = radius * radius * PI;
    std::cout << "The Circle has an area of : " << area << std::endl;
}

std::vector<Point> Circle::buildCircle() {
    std::vector<Point> points;
    int numPoints = 100;
    for (int i = 0; i < numPoints; ++i) {
        double angle = 2 * M_PI * i / numPoints;
        double x = c.x + radius * cos(angle);
        double y = c.y + radius * sin(angle);
        points.push_back(Point(x, y));
    }
    return points;
}

void Circle::draw(const std::vector<Point>& points) {
    Writer w;
    std::string data;
    for (const auto& point : points) {
        data.append(std::to_string(point.x) + " " + std::to_string(point.y) + "\n");
    }
    w.write(data);
    std::cout << ".dat file has been saved in your folder." << std::endl;
}

void Circle::draw()
{
    cout<< "this should not print";
}

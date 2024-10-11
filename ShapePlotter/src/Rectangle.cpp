#include <iostream>
#include "Rectangle.h"
#include "Point.h"
#include "Writer.h"
using namespace std;

Rectangle::Rectangle(Point a, double length , double breadth) : x1(a), length(length), breadth(breadth){}

Rectangle::~Rectangle(){}

vector<Point> Rectangle::buildRectangle()
{
    vector<Point> points;
    points.push_back(x1);
    points.push_back(Point(x1.x + length, x1.y));
    points.push_back(Point(x1.x + length, x1.y + breadth));
    points.push_back(Point(x1.x, x1.y + breadth));
    points.push_back(x1);
    return points;
}

void Rectangle::draw(vector<Point> points){
    Writer w;
    string data;
    for(size_t i=0; i<points.size(); i++){
        data.append(to_string(points[i].x) + " " + to_string(points[i].y) + "\n");
    }
    w.write(data);
    cout << ".dat file has been saved in your folder." << endl;
}

void Rectangle::draw()
{
    cout << "this should not be printing" << endl;
}

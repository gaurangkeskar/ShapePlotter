#include "Input.h"
#include "Point.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
#include <iostream>
using namespace std;

void Input::getInput()
{
    string in;
    cout << "Enter the name of the Shape :" << endl;
    cin >> in;
    if(in == "Rectangle"){
        cout << "Great! Let's build it." << endl;
        cout << "Enter the length : " ;
        cin >> length;
        cout << endl;
        cout << "Enter the breadth : ";
        cin >> breadth;
        cout << endl;
        cout << "You need to enter one point : " << endl;
        cin >> x >> y;
        Point p1(x,y);
        Rectangle rect(p1, length, breadth);
        cout << "CADifying your shape..." << endl;
        vector<Point> p = rect.buildRectangle();
        rect.draw(p);
    }
    else if (in == "Circle") {
        cout << "You need to enter the center point: " << endl;
        cin >> x >> y;
        Point center(x, y);
        double radius;
        cout << "Enter the radius: ";
        cin >> radius;
        Circle c(center, radius);
        cout << "CADifying your circle..." << endl;
        vector<Point> circlePoints = c.buildCircle();
        c.getCircleArea(); 
        c.draw(circlePoints);
    } 
       else if (in == "Triangle") {
        cout << "Great! Let's build a triangle." << endl;
        Triangle triangle(Point(0, 0), Point(0, 0), Point(0, 0)); // Create a temporary triangle
        triangle.getTriangle(); // Get input for the triangle
        cout << "CADifying your triangle..." << endl;
        triangle.draw(); // Call the draw method
    }
      else if (in == "Line") {
        cout << "Great! Let's build a line." << endl;
        Line line(Point(0, 0), Point(0, 0)); // Create a temporary line
        line.getLine(); // Get input for the line
        cout << "CADifying your line..." << endl;
        line.draw(); // Call the draw method
    }
     else if (in == "Square") {
        cout << "Great! Let's build a square." << endl;
        double side;
        cout << "Enter the side length: ";
        cin >> side;
        cout << "You need to enter one point (the bottom-left corner): " << endl;
        double x, y;
        cin >> x >> y;
        Point p1(x, y);
        Square square(p1, side);
        cout << "CADifying your square..." << endl;
        square.draw(); // Call the draw method
     }
    
}

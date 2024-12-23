#ifndef task5_geometry_Line
#define task5_geometry_Line

#include <list>

#include "./Point.h"

class Line {
public:
    Point * p1, * p2;

    double k;

    Line(Point * p1, Point * p2);

    Line(Point * p1);

    int sign(Point * p1);

    int checkSignOfPoints(std::list<Point> * points);
};

#endif
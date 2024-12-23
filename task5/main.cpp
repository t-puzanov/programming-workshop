#include <iostream>
#include <list>

#include "./geometry/Polygon.h"
#include "./geometry/Line.h"
#include "./geometry/Point.h"

int main() {
    std::list<Point> points = {
        Point(0.5, 0.6), Point(0, 0), Point(1, 0), Point(0, 1),
    };

    Polygon * poly = new Polygon(&points);

    if (poly->isConvex()) {
        std::cout << "Convex: Yes; \n";
    } else {
        std::cout << "Convex: No; \n";
    }
}
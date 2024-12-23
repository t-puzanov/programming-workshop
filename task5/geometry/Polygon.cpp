#include <list>
#include <iostream>

#include "./Polygon.h"
#include "./Point.h"
#include "./Line.h"

Polygon::Polygon(std::list<Point> * points) {
    this->points = points;
    this->convex = -1;
}

int includes(std::list<Point> points, Point p) {
    for (Point r : points) {
        if (r == p) return 1;
    }
    return 0;
}

int Polygon::isConvex() {
    if (this->convex != -1) return this->convex;

    std::list<Point> list;

    Point p = *this->points->begin();

    list.push_back(p);

    while (list.size() != this->points->size()) {
        int done = 0;

        for (Point r : *this->points) {
            if (includes(list, r)) continue;

            Line L(&p, &r);

            if (L.checkSignOfPoints(this->points)) {
                done = 1;
                p = r;
                break;
            }
        }

        if (!done) {
            this->convex = 0;
            return 0;
        }

        list.push_back(p);
    }

    Line L(&p, &(*list.begin()));

    this->convex = L.checkSignOfPoints(this->points);

    return this->convex;
}

#include <list>

#include "./Line.h"
#include "./Point.h"

Line::Line(Point * p1, Point * p2) {
    this->p1 = p1;
    this->p2 = p2;

    this->k = (p2->y - p1->y);
    this->k = this->k / (p2->x - p1->x);
}

Line::Line(Point * p1) {
    this->p1 = p1;
    this->p2 = new Point();

    this->k = (p1->y);
    this->k = this->k / (p1->x);
}

int Line::sign(Point * p) {
    double r;
    
    r = p->y - this->p1->y;
    r = r - (p->x - this->p1->x) * this->k;

    if (r == 0) return 0;

    return (r > 0) * 2 - 1;
}

int Line::checkSignOfPoints(std::list<Point> * points) {
    int sign = 2;

    auto iter = points->begin();
    auto end = points->end();

    for (; iter != end; iter++) {
        Point p = *iter;

        int c = this->sign(&p);

        if (p == *this->p1 || p == *this->p2) continue;

        if (sign == 2) {
            sign = c;
            break;
        }
    }

    for (; iter != end; iter++) {
        Point p = *iter;

        int c = this->sign(&p);

        if (p == *this->p1 || p == *this->p2) continue;

        if (sign != c && c != 0) return 0;
    }

    return 1;
}

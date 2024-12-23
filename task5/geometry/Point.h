#ifndef task5_geometry_Point
#define task5_geometry_Point

class Point {
public:
    double x, y;

    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    Point() {
        this->x = 0;
        this->y = 0;
    }

    int operator == (Point p) {
        return (p.x == x) && (p.y == y);
    }

    Point operator = (Point p) {
        this->x = p.x;
        this->y = p.y;

        return *this;
    }
};

#endif
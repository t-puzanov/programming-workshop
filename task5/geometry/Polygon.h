#ifndef task5_geometry_Polygon
#define task5_geometry_Polygon

#include <list>

#include "./Point.h"

class Polygon {
private:
    int convex;
public:
    std::list<Point> * points;
    
    Polygon(std::list<Point> * points);

    int isConvex();
};

#endif
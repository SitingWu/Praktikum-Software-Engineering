#ifndef SEL_POINT_H
#define SEL_POINT_H

#include "angle.h"


struct Angle;

struct Point
{
    double x{0.0};
    double y{0.0};
};

Point createPoint(double distance, Angle angle);

bool isEqual(Point point1, Point point2);
Point addPoints(Point one, Point two);
Point subtractPoints(Point one, Point two);
Point multiplyPoint(Point point, double factor);

double getLength(Point point);
double distanceTo(Point one, Point two);
void rotate(Point& point, Angle angle);

#endif  // SEL_POINT_H

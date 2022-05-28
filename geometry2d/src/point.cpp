#include "point.h"

#include <cmath>

#include "geo_compare.h"


Point createPoint(double distance, Angle angle)
{
    return Point{distance * cos(getValueBetweenMinusPiAndPi(angle)),
                 distance * sin(getValueBetweenMinusPiAndPi(angle))};
}

bool isEqual(Point point1, Point point2)
{
    return isFuzzyEqual(point1, point2, 0.00001);
}

double getLength(Point point)
{
    return sqrt(point.x * point.x + point.y * point.y);
}

double distanceTo(Point one, Point two)
{
    return getLength(subtractPoints(one, two));
}

Point subtractPoints(Point one, Point two)
{
    return Point{one.x - two.x, one.y - two.y};
}

Point addPoints(Point one, Point two)
{
    return Point{one.x + two.x, one.y + two.y};
}

Point multiplyPoint(Point point, double factor)
{
    return Point{point.x * factor, point.y * factor};
}

void rotate(Point& point, Angle angle)
{
    double angleValue = getValueBetweenMinusPiAndPi(angle);
    double xVal = point.x * cos(angleValue) - point.y * sin(angleValue);
    double yVal = point.x * sin(angleValue) + point.y * cos(angleValue);
    point.x = xVal;
    point.y = yVal;
}

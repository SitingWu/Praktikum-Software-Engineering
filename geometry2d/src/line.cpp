#include "line.h"


Line createLine(Point start, Angle angle, double distance)
{
    return Line{start, addPoints(start, createPoint(distance, angle))};
}

Angle getDirection(Line line)
{
    return createAngle(line.start, line.end);
}

double getLength(Line line)
{
    return distanceTo(line.start, line.end);
}

void shiftParallel(Line& line, Point point)
{
    Point direction = subtractPoints(line.end, line.start);
    line.start = point;
    line.end = addPoints(line.start, direction);
}

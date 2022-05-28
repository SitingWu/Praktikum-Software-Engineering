#ifndef SEL_LINE_H
#define SEL_LINE_H

#include "angle.h"
#include "point.h"


struct Line
{
    Point start;
    Point end;
};

Line createLine(Point start, Angle angle, double distance);

Angle getDirection(Line line);
double getLength(Line line);

void shiftParallel(Line& line, Point point);


#endif  // SEL_LINE_H

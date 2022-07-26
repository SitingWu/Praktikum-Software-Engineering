#ifndef SEL_LINE_H
#define SEL_LINE_H

#include "angle.h"
#include "point.h"

class Angle;
class Point;

class Line {
public:
  // costructors
  Line(Point start, Point end) : start_(start), end_(end) {}
  Line(Point start, Angle angle, double distance)
      : start_(start), end_(start + Point(distance, angle)){};

  double getLength() const;
  void shiftParallel(Point point);

  Angle getDirection() const;
  Point getPerpendicularPoint(Point point) const;

  Point getStart() const;
  Point getEnd() const;

  void setStart(Point start);
  void setEnd(Point end);

private:
  Point start_;
  Point end_;
};

// Line createLine(Point start, Angle angle, double distance);

// Angle getDirection(Line line);
// double getLength(Line line);

// void shiftParallel(Line &line, Point point);
// Point getPerpendicularPoint(Line line, Point point);

#endif // SEL_LINE_H

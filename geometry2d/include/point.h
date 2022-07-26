#ifndef SEL_POINT_H
#define SEL_POINT_H

#include "angle.h"
// struct Angle;
class Angle;
class Geo_compare;
class Pose;

class Point {

public:
  // Constructor
  Point(void) : x_(0.0), y_(0.0) {}
  Point(double x, double y) : x_(x), y_(y) {}
  Point(double distance, Angle angle);
  // Operator
  Point operator-(Point other) const;
  bool operator==(Point other) const;
  Point operator+(Point other) const;
  Point operator*(double factor) const;
  // getter Function
  double getX() const;
  double getY() const;
  Point getPoint() const;
  // Member
  double getLength() const;
  double distanceTo(Point other) const;
  void rotate(Angle angle);
  Point multiplyPoint(double factor) const;

private:
  double x_;
  double y_;
};

#endif // SEL_POINT_H

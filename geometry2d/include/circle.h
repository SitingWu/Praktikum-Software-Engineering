#ifndef SEL_CIRCLE_H
#define SEL_CIRCLE_H

#include "compare.h"
#include "geo_compare.h"
#include "point.h"
class Point;
class Geo_compare;
class Compare;
class Circle {
public:
  // Constructor
  Circle(Point &center, double radius) : center_(&center), radius_(radius) {}
  Circle(Point &one, Point &two);

  double area() const;
  double periphery() const;
  bool isInside(Point other);
  void move(Point &other);
  void resize(double other);

  Point getCenter();
  double getRadius() const;

private:
  Point *center_;
  double radius_;
};

#endif
#include "circle.h"
#include "point.h"

#include <cmath>
#define e 0.001
Point Circle::getCenter() { return *center_; }

double Circle::getRadius() const { return radius_; }

Circle::Circle(Point &one, Point &two) {
  double radius = one.distanceTo(two);
  radius_ = radius;
  *center_ = one;
}

double Circle::area() const { return M_PI * radius_ * radius_; }

double Circle::periphery() const { return 2 * M_PI * radius_; }

bool Circle::isInside(Point other) {

  double distance = center_->distanceTo(other);

  Compare comp(radius_);
  const bool result = comp.isStrictFuzzyGreater(distance, e);

  return result;
}
void Circle::move(Point &other) { center_ = &other; }
void Circle::resize(double other) { radius_ = other; }
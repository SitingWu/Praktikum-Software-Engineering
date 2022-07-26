#include "line.h"
#include "angle.h"
#include "point.h"

double Line::getLength() const {
  // Point point();
  return start_.distanceTo(end_);
}

Angle Line::getDirection() const { return Angle{start_, end_}; }

void Line::shiftParallel(Point point) {
  Point direction{end_ - start_};
  start_ = point;
  end_ = start_ + direction;
}

Point Line::getStart() const { return this->start_; }

Point Line::getEnd() const { return this->end_; }

void Line::setStart(Point start) { this->start_ = start; }

void Line::setEnd(Point end) { this->end_ = end; }

Point Line::getPerpendicularPoint(Point point) const {

  if (start_.getX() == end_.getX()) {
    return Point{start_.getX(), point.getY()};
  }

  double m = (end_.getY() - start_.getY()) / (end_.getX() - start_.getX());
  if (m == 0) {
    return {point.getX(), start_.getY()};
  }

  double b = (end_.getY() - m * end_.getX());

  double m2 = -1 / m;
  double b2 = point.getY() - m2 * point.getX();

  double tempX = (b2 - b) / (m - m2);
  double tempY = m * tempX + b;
  Point perpPoint = {tempX, tempY};

  return perpPoint;
}

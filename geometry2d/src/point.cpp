#include "point.h"
#include "angle.h"
#include "geo_compare.h"
#include <cmath>
<<<<<<< HEAD
#include <stdio.h>
#include "geo_compare.h"
=======
#include <cstdio>

Point::Point(double distance, Angle angle) {
  x_ = distance * cos(angle.getValueBetweenMinusPiAndPi());
  y_ = distance * sin(angle.getValueBetweenMinusPiAndPi());
}
>>>>>>> google_test

Point Point::multiplyPoint(double factor) const {

<<<<<<< HEAD
Point createPoint(double distance, Angle angle)
{   //distance =Radios
    //x=r*cos(a)
    //y=r*sin(a)
    return Point{distance * cos(getValueBetweenMinusPiAndPi(angle)),
                 distance * sin(getValueBetweenMinusPiAndPi(angle))};
=======
  Point p(x_ * factor, y_ * factor);
  return p;
>>>>>>> google_test
}
// getter Funciotn

double Point::getX() const { return this->x_; }
double Point::getY() const { return this->y_; }
Point Point::getPoint() const { return Point{this->x_, this->y_}; }

double Point::getLength() const { return sqrt(x_ * x_ + y_ * y_); }

double Point::distanceTo(Point other) const {
  Point one = this->getPoint();
  Point point = one - other;
  return point.getLength();
}
Point Point::operator-(Point other) const {
  Point point(0, 0);

  point.x_ = this->x_ - other.x_;
  point.y_ = this->y_ - other.y_;
  return point;
}
bool Point::operator==(Point other) const {
  Point one(x_, y_);
  Geo_compare geo(one);
  return geo.isFuzzyEqual(other, 0.0001);
}

Point Point::operator+(Point other) const {
  return Point{x_ + other.x_, y_ + other.y_};
}
Point Point::operator*(double factor) const {
  return Point{x_ * factor, y_ * factor};
}

<<<<<<< HEAD
void rotate(Point& point, Angle angle)
{
    double angleValue = getValueBetweenMinusPiAndPi(angle);
    double xVal = point.x * cos(angleValue) - point.y * sin(angleValue);
    double yVal = point.x * sin(angleValue) + point.y * cos(angleValue);
   
   
    point.x = xVal;
    point.y = yVal;
=======
void Point::rotate(Angle angle) {

  double angleValue = angle.getValueBetweenMinusPiAndPi();
  double xVal = x_ * cos(angleValue) - y_ * sin(angleValue);
  double yVal = x_ * sin(angleValue) + y_ * cos(angleValue);

  x_ = xVal;
  y_ = yVal;
>>>>>>> google_test
}

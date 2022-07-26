#include "angle.h"
#include "geo_compare.h"
#include "point.h"

#include <cmath>

double Angle::fixAngleRange() // return A im Intervall [-Pi;Pi]
{
  while (this->value_ <= M_PI) {
    this->value_ += 2 * M_PI;
  } // A muss > Pi

  this->value_ -=
      2 * M_PI * static_cast<unsigned int>(this->value_ / (2 * M_PI));
  // A = A-2Pi * uint(A/2Pi)
  // uint(A/2Pi) : Periode
  // return A im Intervall [0;2Pi]
  return this->value_ > M_PI ? this->value_ - 2 * M_PI : this->value_;
  // return (condition)?true : false
  // if(A > Pi) return A-2Pi
  // else       return A
}

Angle Angle::convertFromDegreeToRadiant() const {
  return Angle{value_ / 180 * M_PI};
}

Angle Angle::getHalfRotation() {
  value_ = M_PI;
  Angle angle(value_);
  return angle;
}
Angle Angle::getQuarterRotation() {
  value_ = M_PI_2;
  Angle angle(value_);
  return angle;
}
Angle Angle::getFullRotation() {
  value_ = value_;
  Angle angle(value_);
  return angle;
}
Angle Angle::getEighthRotation() {
  value_ = M_PI_4;
  Angle angle(value_);
  return angle;
}

double Angle::getValueBetweenMinusPiAndPi() { return this->fixAngleRange(); }

double Angle::getValueBetweenZeroAndTwoPi() {

  this->value_ = fixAngleRange();

  return this->value_ < 0 ? this->value_ + 2 * M_PI : this->value_;
}

Angle Angle::operator+(Angle other) {
  Angle sum;
  sum.value_ =
      this->getValueBetweenMinusPiAndPi() + other.getValueBetweenMinusPiAndPi();
  sum.value_ = sum.fixAngleRange();
  // return Angle{(one.getValueBetweenMinusPiAndPi() +
  // other.getValueBetweenMinusPiAndPi()).fixAngleRange()}
  return sum;
}

Angle Angle::operator-(Angle other) {
  Angle difference;
  difference.value_ =
      this->getValueBetweenMinusPiAndPi() - other.getValueBetweenMinusPiAndPi();
  difference.value_ = difference.fixAngleRange();
  // return Angle{(one.getValueBetweenMinusPiAndPi() +
  // other.getValueBetweenMinusPiAndPi()).fixAngleRange()}
  return difference;
}

bool Angle::operator==(Angle other) const {
  Angle value(value_);
  Geo_compare geo(value);
  return geo.isFuzzyEqual(other.value_, 0.00001);
}

Angle Angle::operator*(double factor) {
  Angle product;

  product.value_ = this->getValueBetweenMinusPiAndPi() * factor;
  product.value_ = product.fixAngleRange();

  return product;
}

Angle::Angle(Point start, Point end) {
  Point positionDifference = end - start; // end.x-start.y
  Angle angle(atan2(positionDifference.getY(), positionDifference.getX()));
  double value1 = angle.fixAngleRange();
  value_ = value1;

  // atan2(y,x) : arctan(y/x)S
}

bool Angle::isObtuse() {
  return fabs(this->getValueBetweenMinusPiAndPi()) > M_PI_2;
}

Angle Angle::abs() { return Angle{fabs(this->getValueBetweenMinusPiAndPi())}; }

Angle::Angle(Point source, Point targetOne, Point targetTwo) {

  Compare comp1(source.distanceTo(targetOne));
  Compare comp2(source.distanceTo(targetTwo));

  if (!comp1.isFuzzyEqual(0, 0.001) && !comp2.isFuzzyEqual(0, 0.001)) {
    value_ = (Angle(source, targetOne) - Angle(source, targetTwo)).abs().value_;
  }
  value_ = 0.0;
}

double Angle::getValue() const { return this->value_; }

void Angle::setValue(double value) { this->value_ = value; }
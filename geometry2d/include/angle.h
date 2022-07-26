#ifndef SEL_ANGLE_H
#define SEL_ANGLE_H

#include "geo_compare.h"
#include "point.h"
class Point;
class Angle {
public:
  // costructors
  Angle(double value) : value_(value){};
  Angle() : value_(0.0){};
  Angle(Point start, Point end);
  Angle(Point source, Point targetOne, Point targetTwo);

  // operators
  Angle operator+(Angle other);
  Angle operator-(Angle other);
  bool operator==(Angle other) const;
  Angle operator*(double factor);

  Angle abs();
  Angle getHalfRotation();
  Angle getQuarterRotation();
  Angle getFullRotation();
  Angle getEighthRotation();
  Angle convertFromDegreeToRadiant() const;

  double fixAngleRange();
  double getValueBetweenMinusPiAndPi();
  double getValueBetweenZeroAndTwoPi();
  double getValue() const;
  void setValue(double value);
  bool isObtuse();

private:
  double value_;
};

#endif // SEL_ANGLE_H

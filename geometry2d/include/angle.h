#ifndef SEL_ANGLE_H
#define SEL_ANGLE_H

#include "point.h"


struct Point;

double fixAngleRange(double angleValue);

struct Angle
{
    double value{0.0};
};

Angle createAngle(Point start, Point end);
Angle createAngle(Point source, Point targetOne, Point targetTwo);

double getValueBetweenMinusPiAndPi(Angle angle);
double getValueBetweenZeroAndTwoPi(Angle angle);
bool isObtuse(Angle angle);
Angle abs(Angle angle);

Angle addAngles(Angle one, Angle two);
Angle subtractAngles(Angle one, Angle two);
Angle multiplyAngle(Angle angle, double factor);
bool isEqual(Angle one, Angle two);

Angle getHalfRotation();
Angle getQuarterRotation();
Angle getFullRotation();
Angle getEighthRotation();
Angle convertFromDegreeToRadiant(double angle);

#endif  // SEL_ANGLE_H

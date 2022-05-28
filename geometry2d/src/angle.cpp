#include "angle.h"

#include <cmath>

#include "geo_compare.h"
#include "point.h"


double fixAngleRange(double angleValue)
{
    while (angleValue <= M_PI)
    {
        angleValue += 2 * M_PI;
    }

    angleValue -= 2 * M_PI * static_cast<unsigned int>(angleValue / (2 * M_PI));

    return angleValue > M_PI ? angleValue - 2 * M_PI : angleValue;
}

Angle convertFromDegreeToRadiant(double angle)
{
    return Angle{angle / 180 * M_PI};
}

Angle getHalfRotation()
{
    return Angle{M_PI};
}

Angle getQuarterRotation()
{
    return Angle{M_PI_2};
}

Angle getFullRotation()
{
    return {};
}

Angle getEighthRotation()
{
    return Angle{M_PI_4};
}

double getValueBetweenMinusPiAndPi(Angle angle)
{
    return fixAngleRange(angle.value);
}

double getValueBetweenZeroAndTwoPi(Angle angle)
{
    angle.value = fixAngleRange(angle.value);
    return angle.value < 0 ? angle.value + 2 * M_PI : angle.value;
}

Angle multiplyAngle(Angle angle, double factor)
{
    return Angle{fixAngleRange(getValueBetweenMinusPiAndPi(angle) * factor)};
}

Angle addAngles(Angle one, Angle two)
{
    return Angle{fixAngleRange(getValueBetweenMinusPiAndPi(one) + getValueBetweenMinusPiAndPi(two))};
}

Angle subtractAngles(Angle one, Angle two)
{
    return Angle{fixAngleRange(getValueBetweenMinusPiAndPi(one) - getValueBetweenMinusPiAndPi(two))};
}

Angle createAngle(Point start, Point end)
{
    Point positionDifference = subtractPoints(end, start);
    return Angle{fixAngleRange(atan2(positionDifference.y, positionDifference.x))};
}

bool isEqual(Angle one, Angle two)
{
    return isFuzzyEqual(one, two, 0.00001);
}

bool isObtuse(Angle angle)
{
    return fabs(getValueBetweenMinusPiAndPi(angle)) > M_PI_2;
}

Angle abs(Angle angle)
{
    return Angle{fabs(getValueBetweenMinusPiAndPi(angle))};
}

Angle createAngle(Point source, Point targetOne, Point targetTwo)
{
    if (!isFuzzyEqual(distanceTo(source, targetOne), 0, 0.001) &&
        !isFuzzyEqual(distanceTo(source, targetTwo), 0, 0.001))
    {
        return abs(subtractAngles(createAngle(source, targetOne), createAngle(source, targetTwo)));
    }
    return Angle{0};
}

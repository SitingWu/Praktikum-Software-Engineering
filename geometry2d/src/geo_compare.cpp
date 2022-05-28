#include "geo_compare.h"

#include "angle.h"
#include "point.h"
#include "pose.h"


bool isFuzzyEqual(Point one, Point two, double epsilon)
{
    return isFuzzyEqual(one.x, two.x, epsilon) && isFuzzyEqual(one.y, two.y, epsilon);
}

bool isFuzzyEqual(Angle one, Angle two, double epsilon)
{
    return isFuzzyEqual(getValueBetweenMinusPiAndPi(one), getValueBetweenMinusPiAndPi(two), epsilon) ||
           isFuzzyEqual(getValueBetweenZeroAndTwoPi(one), getValueBetweenZeroAndTwoPi(two), epsilon);
}

bool isFuzzyEqual(Pose one, Pose two, double epsilon)
{
    return isFuzzyEqual(one.position, two.position, epsilon) && isFuzzyEqual(one.orientation, two.orientation, epsilon);
}

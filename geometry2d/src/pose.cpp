#include "pose.h"

#include "geo_compare.h"


double distanceTo(Pose one, Pose two)
{
    return distanceTo(one.position, two.position);
}

Angle getRelativeOrientationTo(Pose source, Point point)
{
    return subtractAngles(createAngle(source.position, point), source.orientation);
}

bool isEqual(Pose one, Pose two)
{
    return isFuzzyEqual(one, two, 0.00001);
}

Pose addPoses(Pose one, Pose two)
{
    return Pose{addPoints(one.position, two.position), addAngles(one.orientation, two.orientation)};
}

Pose subtractPoses(Pose one, Pose two)
{
    return Pose{subtractPoints(one.position, two.position), subtractAngles(one.orientation, two.orientation)};
}

#ifndef SEL_POSE_H
#define SEL_POSE_H

#include "angle.h"
#include "point.h"


struct Pose
{
    Point position;
    Angle orientation;
};

double distanceTo(Pose one, Pose two);
Angle getRelativeOrientationTo(Pose source, Point point);

bool isEqual(Pose one, Pose two);
Pose addPoses(Pose one, Pose two);
Pose subtractPoses(Pose one, Pose two);

#endif  // SEL_POSE_H

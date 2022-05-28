#ifndef SEL_GEOCOMPARE_H
#define SEL_GEOCOMPARE_H

#include "compare.h"

struct Angle;
struct Point;
struct Pose;


bool isFuzzyEqual(Point one, Point two, double epsilon);
bool isFuzzyEqual(Angle one, Angle two, double epsilon);
bool isFuzzyEqual(Pose one, Pose two, double epsilon);

#endif  // SEL_GEOCOMPARE_H

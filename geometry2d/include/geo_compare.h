#ifndef SEL_GEOCOMPARE_H
#define SEL_GEOCOMPARE_H

#include "angle.h"
#include "compare.h"
#include "point.h"
#include "pose.h"

class Point;
class Angle;
class Pose;
class Compare;
class Geo_compare {

public:
  Geo_compare();
  Geo_compare(Point &one) : point_(&one) {}
  Geo_compare(Angle &one) : angle_(&one) {}
  Geo_compare(Pose &one) : pose_(&one) {}
  bool isFuzzyEqual(Point two, double epsilon) const;
  bool isFuzzyEqual(Angle two, double epsilon) const;
  bool isFuzzyEqual(Pose two, double epsilon) const;

private:
  Point *point_;
  Angle *angle_;
  Pose *pose_;
};

#endif // SEL_GEOCOMPARE_H

#ifndef SEL_POSE_H
#define SEL_POSE_H

#include "angle.h"
#include "geo_compare.h"
#include "point.h"
class Point;
class Angle;
class Geo_compare;
class Pose {

public:
  // Pose(void) : x_(0.0), y_(0.0), angle_(0.0) {}
  Pose(Point &position, Angle &orientation)
      : position_(&position), orientation_(&orientation) {}
  // Pose(double x, double y, double angle);
  double distanceTo(Pose other) const;
  Angle getRelativeOrientationTo(Point point) const;
  // Operator
  bool operator==(Pose other) const;
  Pose operator+(Pose &other) const;
  Pose operator-(Pose other) const;
  // getter function
  Pose getPose() const;
  Point getPosition() const;
  Angle getOrientation() const;

private:
  // double x_;
  // double y_;
  // double angle_;
  Point *position_;
  Angle *orientation_;
  // Point position_={x_,y_};

  // Angle orientation_;
  // bool isEqual();
  // Pose addPoses();
  // Pose subtractPoses();
};

#endif // SEL_POSE_H

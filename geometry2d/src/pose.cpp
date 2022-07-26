#include "pose.h"
#include "angle.h"
#include "geo_compare.h"
#include "point.h"

// Pose::Pose(double x ,double y , double angle)
// {
//   Point p(x,y);
//   Angle a(angle);
//   position_= &p;
//   orientation_=&a;
// }

double Pose::distanceTo(Pose other) const {
  Point position(this->getPosition());
  return position.distanceTo(other.getPosition());
}

Angle Pose::getRelativeOrientationTo(Point point) const {
  Angle angle(*position_, point);
  Angle a(angle - *orientation_);
  return a;
}

bool Pose::operator==(Pose other) const {

  Pose one(*position_, *orientation_);
  Geo_compare geo(one);

  return geo.isFuzzyEqual(other, 0.00001);
}

Pose Pose::getPose() const { return Pose{*position_, *orientation_}; }

Point Pose::getPosition() const { return *position_; }
Angle Pose::getOrientation() const { return *orientation_; }
// bool Pose::isEqual() {
//   Pose one ={position_,orientation_};
//   Pose two  ={position2_,orientation2_};
//   Geo_compare geo ={one,two,0.00001};
//   return geo.isFuzzyEqual();
//   }
Pose Pose::operator+(Pose &other) const {
  Point position(*position_ + *other.position_);
  Angle orientation(*orientation_ + *other.orientation_);
  Pose tmp(position, orientation);
  return tmp;
}

// Pose Pose::addPoses() {
//     Point point ={position_, position2_};
//     Angle angle ={orientation_, orientation2_};
//   return Pose{point.addPoints(),
//               angle.addAngles()};
// }
Pose Pose::operator-(Pose other) const {
  Point position(*position_ - *other.position_);
  Angle orientation(this->getOrientation() - other.getOrientation());
  return Pose{position, orientation};
}
// Pose Pose::subtractPoses() {
//   Point point ={position_, position2_};
//   Angle angle ={orientation_, orientation2_};
//   return Pose{point.subtractPoints(),
//               angle.subtractAngles()};
// }

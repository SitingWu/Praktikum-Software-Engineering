#include "geo_compare.h"
#include "angle.h"
#include "compare.h"
#include "point.h"
#include "pose.h"

bool Geo_compare::isFuzzyEqual(Point two, double epsilon) const {
  Compare comX(point_->getX());
  Compare comY(point_->getY());
  return comX.isFuzzyEqual(two.getX(), epsilon) &&
         comY.isFuzzyEqual(two.getY(), epsilon);
}

bool Geo_compare::isFuzzyEqual(Angle two, double epsilon) const {
  Compare comX(angle_->getValueBetweenMinusPiAndPi());
  Compare comY(angle_->getValueBetweenZeroAndTwoPi());
  return comX.isFuzzyEqual(two.getValueBetweenMinusPiAndPi(), epsilon) ||
         comY.isFuzzyEqual(two.getValueBetweenZeroAndTwoPi(), epsilon);
}

bool Geo_compare::isFuzzyEqual(Pose two, double epsilon) const {
  Pose pose(*pose_);
  Point point(pose.getPosition());
  Angle angle(pose.getOrientation());
  Geo_compare geoPosition(point);
  Geo_compare geoAngle(angle);

  return geoPosition.isFuzzyEqual(two.getPosition(), epsilon) &&
         geoAngle.isFuzzyEqual(two.getOrientation(), epsilon);
}

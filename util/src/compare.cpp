#include "compare.h"

#include <cmath>

// epsilon : Abweichung
bool Compare::isFuzzyEqual(double value2, double epsilon) const {
  return fabs(value_ - value2) <
         epsilon; // double fabs() :|valuel - value2| < epsilon
}
// return 0 when Abstand zw. v1 und v2 >= epsilon
// return 1 when Abstand zw. v1 und v2 < epsilon

bool Compare::isFuzzyGreater(double value2, double epsilon) const {
  return value_ + epsilon > value2;
}
bool Compare::isFuzzySmaller(double value2, double epsilon) const {
  return value_ < epsilon + value2;
}

bool Compare::isStrictFuzzyGreater(double value2, double epsilon) const {
  return value_ > epsilon + value2;
}

bool Compare::isStrictFuzzySmaller(double value2, double epsilon) const {
  return value_ + epsilon < value2;
}

#include "compare.h"

#include <cmath>

//epsilon : Abweichung
bool isFuzzyEqual(double value1, double value2, double epsilon)
{
    return fabs(value1 - value2) < epsilon; //double fabs() :|valuel - value2| < epsilon
}
// return 0 when Abstand zw. v1 und v2 >= epsilon
// return 1 when Abstand zw. v1 und v2 < epsilon

bool isFuzzyGreater(double value1, double value2, double epsilon)
{
    return value1 + epsilon > value2;
}

bool isFuzzySmaller(double value1, double value2, double epsilon)
{
    return value1 < epsilon + value2;
}

bool isStrictFuzzyGreater(double value1, double value2, double epsilon)
{
    return value1 > epsilon + value2;
}

bool isStrictFuzzySmaller(double value1, double value2, double epsilon)
{
    return value1 + epsilon < value2;
}

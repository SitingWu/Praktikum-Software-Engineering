#ifndef SEL_COMPARE_H
#define SEL_COMPARE_H


bool isFuzzyEqual(double value1, double value2, double epsilon);
bool isFuzzyGreater(double value1, double value2, double epsilon);
bool isFuzzySmaller(double value1, double value2, double epsilon);
bool isStrictFuzzyGreater(double value1, double value2, double epsilon);
bool isStrictFuzzySmaller(double value1, double value2, double epsilon);

#endif  // SEL_COMPARE_H

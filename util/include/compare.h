#ifndef SEL_COMPARE_H
#define SEL_COMPARE_H

class Compare {

public:
  Compare(double value) : value_(value) {}

  bool isFuzzyEqual(double value2, double epsilon) const;
  bool isFuzzyGreater(double value2, double epsilon) const;
  bool isFuzzySmaller(double value2, double epsilon) const;
  bool isStrictFuzzyGreater(double value2, double epsilon) const;
  bool isStrictFuzzySmaller(double value2, double epsilon) const;

private:
  double value_;
};

#endif // SEL_COMPARE_H

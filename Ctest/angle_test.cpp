#include "../../geometry2d/include/angle.h"
#include "../../geometry2d/include/geo_compare.h"
#include "../../geometry2d/include/line.h"
#include "../../geometry2d/include/point.h"
#include "../../geometry2d/include/pose.h"
#include <gtest/gtest.h>

#include <cassert>
#include <cstdlib>

#include <cmath>
#define e 0.0001

// tests for fixAngleRange
TEST(fixAngleRangeGoogleTest, FixAngleRangeFor45) {

  Angle angle = {45};
  Compare comp(angle.fixAngleRange());
  double exp = 1.0177;

  const bool result = comp.isFuzzyEqual(exp, e);

  EXPECT_TRUE(result);
}

TEST(fixAngleRangeGoogleTest, FixAngleRangeFor120) {

  Angle angle = {120};
  Compare comp(angle.fixAngleRange());
  double exp = 0.619479;

  const bool result = comp.isFuzzyEqual(exp, e);

  EXPECT_TRUE(result);
}

// tests for convertFromDegreeToRadiant

TEST(convertFromDegreeToRadiantGoogleTest,
     ConvertFrom360DegreeToRadiantExpect2PI) {

  Angle angle = {360};
  Angle expAngle = {2 * M_PI};
  Angle ang = angle.convertFromDegreeToRadiant();
  Geo_compare geo(ang);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

TEST(convertFromDegreeToRadiantGoogleTest,
     ConvertFrom180DegreeToRadiantExpectPI) {

  Angle angle = {180};
  Angle expAngle = {M_PI};

  Angle ang = angle.convertFromDegreeToRadiant();
  Geo_compare geo(ang);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

TEST(convertFromDegreeToRadiantGoogleTest, ConvertFrom0DegreeToRadiantExpect0) {
  Angle angle = {0};
  Angle expAngle = {0};
  Angle ang = angle.convertFromDegreeToRadiant();
  Geo_compare geo(ang);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

// test for getHalfRotation()

TEST(getHalfRotationGoogleTest, HalfRotation) {
  Angle angle = {M_PI};
  Angle expAngle = {M_PI};

  Angle ang = angle.getHalfRotation();
  Geo_compare geo(ang);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

// test for getQuarterRotation()

TEST(getQuarterRotationGoogleTest, QuarterRotation) {
  Angle angle = {};
  Angle expAngle = {M_PI_2};

  Angle ang = angle.getQuarterRotation();
  Geo_compare geo(ang);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

// test for getEighthRotation()

TEST(getEighthRotationGoogleTest, EighthRotation) {

  Angle angle = {};

  Angle expAngle = {M_PI_4};

  Angle ang = angle.getEighthRotation();
  Geo_compare geo(ang);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

// test for getQuarterRotation()

TEST(getFullRotationGoogleTest, FullRotation) {
  Angle angle = {};
  Angle expAngle = {0};

  Angle ang = angle.getFullRotation();
  Geo_compare geo(ang);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

// test for getValueBetweenMinusPiAndPi

TEST(getValueBetweenMinusPiAndPiGoogleTest, ValueBetweenMinusPiAndPiFor60) {
  Angle angle = {60};
  double exp = -2.83185;
  Compare comp(angle.getValueBetweenMinusPiAndPi());
  const bool result = comp.isFuzzyEqual(exp, e);

  EXPECT_TRUE(result);
}

// test for getValueBetweenZeroAndTwoPi

TEST(getValueBetweenZeroAndTwoPiGoogleTest, ValueBetweenZeroAndTwoPiFor520) {
  Angle angle = {520};

  double exp = 4.7788;
  Compare comp(angle.getValueBetweenZeroAndTwoPi());
  const bool result = comp.isFuzzyEqual(exp, e);

  EXPECT_TRUE(result);
}

// test for multiplyAngle

TEST(multiplyAngleGoogleTest, MultiplyAngle90with2_5) {
  Angle angle = {90};
  double factor = 2.5;

  Angle ang1 = {-1.19467};
  Angle tmp = {angle * factor};
  Geo_compare geo(tmp);

  const bool result = geo.isFuzzyEqual(ang1, e);

  EXPECT_TRUE(result);
}

// test for addAngles
TEST(addAnglesGoogleTest, Add90and45) {

  Angle angle1 = {90};
  Angle angle2 = {45};
  Angle expAngle = {3.05311};

  Angle sum = {angle1 + angle2};
  Geo_compare geo(sum);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

// test for subtractAngles
TEST(subtractAnglesGoogleTest, Subtract90and45) {

  Angle angle1 = {90};
  Angle angle2 = {45};
  Angle expAngle = {1.01771};

  Angle difference = {angle1 - angle2};
  Geo_compare geo(difference);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

// test for createAngle
TEST(createAngleGoogleTest, CreateAngleFor1_1And3_3) {
  Point one = {1, 1};
  Point two = {3, 3};
  Angle angle{one, two};

  Angle expAngle = {0.785398};

  Geo_compare geo(angle);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

// test for isEqual
TEST(isEqualGoogleTest, IsEqualExpectTrue) {
  Angle one = {45};
  Angle two = {45};

  const bool result = one == two;

  EXPECT_TRUE(result);
}

// test for isEqual
TEST(isEqualGoogleTest, IsEqualExpectFalse) {
  Angle one = {45};
  Angle two = {0};

  const bool result = one == two;
  ;

  EXPECT_FALSE(result);
}

// test for isObtuse
TEST(isObtuseGoogleTest, IsObtuseExpectTrue) {
  Angle angle = {123};

  const bool result = angle.isObtuse();

  EXPECT_TRUE(result);
}

TEST(isObtuseGoogleTest, IsObtuseExpectFalse) {
  Angle angle = {12};

  const bool result = angle.isObtuse();

  EXPECT_FALSE(result);
}

// test for abs
TEST(AbsGoogleTest, Abs45_minus45ExpectTrue) {
  Angle angle = {45};
  Angle angle1 = {-45};

  Angle ang = angle1.abs();
  Geo_compare geo(ang);

  const bool result = geo.isFuzzyEqual(angle, e);

  EXPECT_TRUE(result);
}

TEST(createAngle2GoogleTest, CreateAngleTest_2) {
  Point source = {1, 1};
  Point targetOne = {1, 1};
  Point targetTwo = {7, 8};

  Angle angle(source, targetOne, targetTwo);
  Angle expAngle = {0};

  Geo_compare geo(angle);

  const bool result = geo.isFuzzyEqual(expAngle, e);

  EXPECT_TRUE(result);
}

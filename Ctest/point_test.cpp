#include "compare.h"
#include "geo_compare.h"
#include "point.h"
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <gtest/gtest.h>
#define e 0.0001
// LMT_SEL_BEGIN

// Creat Point

TEST(creatPointGoogleTest, CreatPointTest_1) {
  double distance = 1.5;
  Angle angel(M_PI);
  Point tmp(distance, angel);
  Point p(-1.5, 0);
  // x=1.5*cos(pi)=-1.5
  // y=1.5*sin(pi)=0;
  Geo_compare geo(tmp);
  const bool result = geo.isFuzzyEqual(p, e);

  EXPECT_TRUE(result);
}

// 0.5*Pi
TEST(creatPointGoogleTest, CreatPointTest_2) {
  double distance = 1.53;
  Angle angel(0.5 * M_PI);
  Point tmp(distance, angel);
  // x=1.5*cos(0.5*pi)=0
  // y=1.5*sin(0.5*pi)=1.53;
  Point p(0, 1.53);
  Geo_compare geo(tmp);
  const bool result = geo.isFuzzyEqual(p, e);

  EXPECT_TRUE(result);
}
// Pi/3
TEST(creatPointGoogleTest, CreatPointTest_3) {
  double distance = 1.5;
  Angle angel(M_PI / 3);
  Point tmp(distance, angel);
  Point p(0.75, 1.5 * sqrt(3) / 2);
  Geo_compare geo(tmp);
  const bool result = geo.isFuzzyEqual(p, e);
  EXPECT_TRUE(result);
}
// 2Pi/3
TEST(creatPointGoogleTest, CreatPointTest_4) {
  double distance = 1.5;
  Angle angel(2 * M_PI / 3);
  Point tmp(distance, angel);
  Point p(-0.75, 1.5 * sqrt(3) / 2);
  Geo_compare geo(tmp);
  const bool result = geo.isFuzzyEqual(p, e);
  EXPECT_TRUE(result);
}

// isEqual_test
TEST(isEqualGoogleTest, isEqual_ExpectTrue) { // zwei same Point
  Point one(1.2, 2.4);
  // Point two = {1.2, 2.4};
  Point two(1.2, 2.4);
  const bool result = (one == two);
  EXPECT_TRUE(result);
}
TEST(isEqualGoogleTest, isEqual_ExpectFalseX) { // zwei different Point
  Point one(1.2, 2.4);
  Point two(1.3, 2.4);
  const bool result = (one == two);
  EXPECT_FALSE(result);
}
TEST(isEqualGoogleTest, isEqual_ExpectFalseY) { // zwei different Point
  Point one(1.2, 2.4);
  Point two(1.2, 2.6);
  const bool result = one == two;
  EXPECT_FALSE(result);
}
TEST(isEqualGoogleTest, isEqual_ExpectFalseXY) { // zwei different Point
  Point one(1.2, 2.4);
  Point two(1.3, 2.41);
  const bool result = one == two;
  EXPECT_FALSE(result);
}
// getLength_test
TEST(getLengthGoogleTest, getLengthExpectTrue_1) {
  Point p(3, 4);
  const Compare comp(p.getLength());

  const bool result = comp.isFuzzyEqual(5, e);

  EXPECT_TRUE(result);
}
TEST(getLengthGoogleTest, getLengthExpectTrue_2) {
  Point p(-3, -4);
  Compare comp(p.getLength());

  const bool result = comp.isFuzzyEqual(5, e);

  EXPECT_TRUE(result);
}
TEST(getLengthGoogleTest, getLengthExpectTrue_3) {
  Point p(-1.5789, 20.58547);
  Compare comp(p.getLength());
  const bool result = comp.isFuzzyEqual(20.6459318106715639, e);

  EXPECT_TRUE(result);
}
TEST(getLengthGoogleTest, getLengthExpectTrue_4) {
  Point p(-33.839, -200.58547);
  Compare comp(p.getLength());
  const bool result = comp.isFuzzyEqual(203.419784, e);

  EXPECT_TRUE(result);
}

// distanceTo_test
TEST(distanceToGoogleTest, distanceToExpectTrue_1) {
  Point one(27.46, -19.63);
  Point two(-107.5479, 16.51);
  Compare comp(one.distanceTo(two));
  const bool result = comp.isFuzzyEqual(139.761342, e);

  EXPECT_TRUE(result);
}

TEST(getLengthGoogleTest, distanceToExpectTrue_2) {
  Point one(-7.46, -4.163);
  Point two(17.45879, 6.51);
  Compare comp(one.distanceTo(two));

  const bool result = comp.isFuzzyEqual(27.108283, e);

  EXPECT_TRUE(result);
}
TEST(getLengthGoogleTest, distanceToExpectTrue_3) {
  Point one(-176.46, 1058.163);
  Point two(517.45879, 6.51);
  Compare comp(one.distanceTo(two));
  const bool result = comp.isFuzzyEqual(1259.959253, e);

  EXPECT_TRUE(result);
}

// addPoints_test
TEST(addPointsGoogleTest, addPointsTest_1) {
  Point one(1.4859, -5.38972);
  Point two(M_PI, 5.392);
  Point p(4.6274926535897932, 0.00228);
  Point tmp(one + two);
  Geo_compare geo(tmp);

  const bool result = geo.isFuzzyEqual(p, e);

  EXPECT_TRUE(result);
}
TEST(addPointsGoogleTest, addPointsTest_2) {
  Point one(-3 * M_PI / 2, M_PI / 2);
  Point two(M_PI, -M_PI / 4);

  Point tmp(one + two);
  Geo_compare geo(tmp);
  Point p(-M_PI / 2, M_PI / 4);
  const bool result = geo.isFuzzyEqual(p, e);

  EXPECT_TRUE(result);
}

// subtractPoints
TEST(subtractPointsGoogleTest, subtractPointsTest_1) {
  Point one(-3 * M_PI / 2, M_PI / 2);
  Point two(M_PI, -M_PI / 4);
  Point tmp(one - two);
  Geo_compare geo(tmp);
  Point p(-5 * M_PI / 2, 3 * M_PI / 4);
  const bool result = geo.isFuzzyEqual(p, e);

  EXPECT_TRUE(result);
}
TEST(subtractPointsGoogleTest, subtractPointsTest_2) {
  Point one(-3 * M_PI / 2, M_PI / 2);
  Point two(-M_PI, M_PI / 4);
  Point tmp(one - two);
  Geo_compare geo(tmp);
  Point p(-M_PI / 2, M_PI / 4);
  const bool result = geo.isFuzzyEqual(p, e);

  EXPECT_TRUE(result);
}

// multiplyPoint_test
TEST(multiplyPointGoogleTest, multiplyPointTest_1) {
  Point one(1.47594, 4.3290);
  double factor = 1.5;
  Point p(2.213910, 6.49350);
  Point tmp(one.multiplyPoint(factor));
  Geo_compare geo(tmp);
  const bool result = geo.isFuzzyEqual(p, e);
  EXPECT_TRUE(result);
}

// rotate_test
TEST(rotateGoogleTest, rotateTest_1) {
  Point point(1.47, 4.3);
  Angle angle(2 * M_PI);
  point.rotate(angle);
  Geo_compare geo(point);
  const Point p(1.47, 4.3);

  const bool result = geo.isFuzzyEqual(p, e);
  EXPECT_TRUE(result);
}
TEST(rotateGoogleTest, rotateTest_2) {
  Point point(-1.47, -4.3);
  Angle angle(-M_PI / 2);
  Point p(-4.3, 1.47000241513897);
  point.rotate(angle);
  Geo_compare geo(point);
  const bool result = geo.isFuzzyEqual(p, e);
  EXPECT_TRUE(result);
}
TEST(rotateGoogleTest, rotateTest_3) {
  Point point = {1.475, -4.32};
  Angle angle = {3 * M_PI / 2};
  point.rotate(angle);
  Geo_compare geo(point);
  Point p(-4.32, -1.4749927208806834);
  const bool result = geo.isFuzzyEqual(p, e);
  EXPECT_TRUE(result);
}

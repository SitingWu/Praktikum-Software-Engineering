#include "../../geometry2d/include/angle.h"
#include "../../geometry2d/include/circle.h"
#include "../../geometry2d/include/geo_compare.h"
#include "../../geometry2d/include/line.h"
#include "../../geometry2d/include/point.h"
#include "../../geometry2d/include/pose.h"

#include <gtest/gtest.h>

#include <cassert>
#include <cstdlib>

#include <cmath>
#define e 0.0001
TEST(GetCenterOOPTest, getCenter_forZeroZero) {
  Point center(0, 0);
  double radius = 1.5;
  Circle circle(center, radius);
  Point p(circle.getCenter());
  Geo_compare geo(p);
  const bool result = geo.isFuzzyEqual(center, e);
  EXPECT_TRUE(result);
}

TEST(GetRadiusOOPTest, getRadius) {
  Point center(0, 0);
  double radius = 1.5;
  Circle circle(center, radius);
  // double r =
  Compare comp(circle.getRadius());
  const bool result = comp.isFuzzyEqual(radius, e);
  EXPECT_TRUE(result);
}

TEST(CreatCircleTest, creatCircle_1) {
  Point one(0, 0);
  Point two(0, 1.5);
  Circle circle(one, two);
  double radius = 1.5;
  // double r =
  Compare comp(circle.getRadius());
  const bool result = comp.isFuzzyEqual(radius, e);
  EXPECT_TRUE(result);
}

TEST(CreatCircleTest, creatCircle_2) {
  Point one(0, 0);
  Point two(0, 0);
  Circle circle(one, two);
  double radius = 0;
  Compare comp(circle.getRadius());
  const bool result = comp.isFuzzyEqual(radius, e);
  EXPECT_TRUE(result);
}

TEST(CreatCircleTest, creatCircle_3) {
  Point one(0, 0);
  Point two(-3, -4);
  Circle circle(one, two);
  double radius = 5;
  Compare comp(circle.getRadius());
  const bool result = comp.isFuzzyEqual(radius, e);
  EXPECT_TRUE(result);
}

TEST(AreaTest, area_1) {
  Point center(0, 0);
  double radius = 5;
  Circle circle(center, radius);

  Compare comp(circle.area());
  double ans = 78.5398163;
  const bool result = comp.isFuzzyEqual(ans, e);
  EXPECT_TRUE(result);
}
TEST(AreaTest, area_2) {
  Point center(0, 0);
  double radius = 6.3;
  Circle circle(center, radius);

  Compare comp(circle.area());
  double ans = 124.689812;
  const bool result = comp.isFuzzyEqual(ans, e);
  EXPECT_TRUE(result);
}

TEST(PeripheryTest, periphery_1) {
  Point center(0, 0);
  double radius = 6.3;
  Circle circle(center, radius);

  Compare comp(circle.periphery());
  double ans = 39.584074;
  const bool result = comp.isFuzzyEqual(ans, e);
  EXPECT_TRUE(result);
}

TEST(isInsideTest, isInside_1) {
  Point center(0, 0);
  double radius = 6.3;
  Circle circle(center, radius);
  Point other(1, 1);

  const bool result = circle.isInside(other);
  EXPECT_TRUE(result);
}

TEST(isInsideTest, isInside_2) {
  Point center(0, 0);
  double radius = 6.3;
  Circle circle(center, radius);
  Point other(0, 6.3);

  const bool result = circle.isInside(other);
  EXPECT_FALSE(result);
}

TEST(moveTest, move_1) {
  Point center(0, 0);
  double radius = 6.3;
  Circle circle(center, radius);
  Point other(0, 6.3);
  circle.move(other);

  Point p(circle.getCenter());
  Geo_compare geo(p);
  const bool result = geo.isFuzzyEqual(other, e);
  EXPECT_TRUE(result);
}

TEST(resizeTest, resize_1) {
  Point center(0, 0);
  double radius = 6.3;
  Circle circle(center, radius);
  double other = 4;
  circle.resize(other);

  Compare comp(circle.getRadius());
  const bool result = comp.isFuzzyEqual(other, e);
  EXPECT_TRUE(result);
}

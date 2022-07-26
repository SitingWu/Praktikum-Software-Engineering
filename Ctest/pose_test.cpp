#include "compare.h"
#include "geo_compare.h"
#include "pose.h"
#include <cassert>
#include <cmath>
#include <cstdio>
#include <gtest/gtest.h>
#define e 0.000001

// LMT_SEL_BEGIN
// distanceTo
TEST(Posetest, distanceToTest_1) {
  // Point : double x{0,0} ; double y{0,0}
  // Angle : double angle{0,0}

  Point p1(27.46, -19.63);
  Angle a1(0);
  Point p2(-107.5479, 16.51);
  Angle a2(0);
  Pose one(p1, a1);
  Pose two(p2, a2);
  const double tmp = one.distanceTo(two);
  Compare com(tmp);
  const bool result = com.isFuzzyEqual(139.761342, e);
  EXPECT_TRUE(result);
}
TEST(Posetest, distanceToTest_2) {
  Point p1(-7.46, -4.163);
  Angle a1(0);
  Point p2(17.45879, 6.51);
  Angle a2(0);
  Pose one(p1, a1);
  Pose two(p2, a2);
  const double tmp = one.distanceTo(two);
  Compare com(tmp);
  const bool result = com.isFuzzyEqual(27.108283, e);
  EXPECT_TRUE(result);
}
TEST(Posetest, distanceToTest_3) {
  Point p1(-176.46, 1058.163);
  Angle a1(0);
  Point p2(517.45879, 6.51);
  Angle a2(0);
  Pose one(p1, a1);
  Pose two(p2, a2);
  const double tmp = one.distanceTo(two);
  Compare com(tmp);
  const bool result = com.isFuzzyEqual(1259.959253, e);
  EXPECT_TRUE(result);
}

// getRelativeOrientationTo_test
TEST(Posetest, getRelativeOrientationToTest_1) {
  Point p(0, M_PI / 4);
  Angle an(M_PI);
  Pose source(p, an);
  Point point(1, M_PI / 2);
  // atan2(point -source) [-pi;pi]//0.665773750028
  const Angle a(-2.4758189035617932);
  Angle tmp = source.getRelativeOrientationTo(point);
  Geo_compare com(tmp);
  const bool result = com.isFuzzyEqual(a, e);
  EXPECT_TRUE(result);
}

// isEqual
TEST(Posetest, isEqualTest_1) {
  Point p1(1, 5.0100001);
  Angle a1(0);
  Point p2(1, 5.01);
  Angle a2(0);

  Pose one(p1, a1);
  Pose two(p2, a2);
  const bool result = one == two;
  EXPECT_TRUE(result);
}
TEST(Posetest, isEqualTest_2) {
  Point p1(1 + e, 5.01);
  Angle a1(0);
  Point p2(1, 5.01 + e);
  Angle a2(0);
  Pose one(p1, a1);
  Pose two(p2, a2);
  const bool result = one == two;
  EXPECT_TRUE(result);
}
TEST(Posetest, isEqualTest_3) {
  Point p1(1.0000001, 5.01);
  Angle a1(0);
  Point p2(1, 5.010001);
  Angle a2(0.000001);

  Pose one = {p1, a1};
  Pose two = {p2, a2};
  const bool result = one == two;
  EXPECT_TRUE(result);
}

// addPoses
TEST(addPosesGoogleTest, addPosesTest_1) {
  Point p1(1.56465, 10.4564);
  Angle a1(M_PI);
  Point p2(-6.154665, 1.168452132);
  Angle a2(-M_PI);
  Pose one(p1, a1);
  Pose two(p2, a2);
  // Pose one = {1.56465, 10.4564, M_PI};
  // Pose two = {-6.154665, 1.168452132, -M_PI};
  Point p3(-4.590015, 11.624852132);
  Angle a3(0);
  Pose p(p3, a3);
  Pose tmp = one + two;
  Geo_compare geo(tmp);
  const bool result = geo.isFuzzyEqual(p, e);
  EXPECT_TRUE(result);
}
TEST(addPosesGoogleTest, addPosesTest_2) {
  Point p1(1.56465, 10.4564);
  Angle a1(2 * M_PI);
  Point p2(-6.154665, 1.168452132);
  Angle a2(M_PI / 2);
  Pose one(p1, a1);
  Pose two(p2, a2);
  Point p3(-4.590015, 11.624852132);
  Angle a3(5 * M_PI / 2);
  Pose p(p3, a3);
  Pose tmp = one + two;
  Geo_compare geo(tmp);
  const bool result = geo.isFuzzyEqual(p, e);
  EXPECT_TRUE(result);
}
// subtractPoses
TEST(subtractPosesGoogleTest, subtractPosesTest_1) {
  Point p1(-16.9125323, 10.78654);
  Angle a1(M_PI);
  Point p2(21.4584564, 2.756);
  Angle a2(-M_PI);
  Pose one(p1, a1);
  Pose two(p2, a2);
  Point p3(-38.3709887, 8.03054);
  Angle a3(2 * M_PI);
  Pose p(p3, a3);
  Pose tmp = one - two;
  Geo_compare geo(tmp);
  const bool result = geo.isFuzzyEqual(p, e);
  EXPECT_TRUE(result);
}

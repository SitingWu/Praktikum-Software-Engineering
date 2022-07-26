<<<<<<< HEAD
#include "../../geometry2d/include/line.h"
#include "../../geometry2d/include/point.h"
#include "../../geometry2d/include/geo_compare.h"
#include "../../geometry2d/include/angle.h"
#include "../../geometry2d/include/pose.h"


#include <cassert>
#include <cstdlib>
#include <cmath>
#define e 0.0001



//tests for isFuzzyEqual for Points
void testIsFuzzyEqualPointsExpectTrue() {
    Point one = {1.0, 2.0};
    Point two = {1.0, 2.0};

    const bool result = isFuzzyEqual(one,two,e);

    assert(result == true);

}

void testIsFuzzyEqualPointsExpectFalse() {
    Point one = {1.0, 3.0};
    Point two = {1.0, 2.0};

    const bool result = isFuzzyEqual(one,two,e);

    assert(result == false);

}

//tests for isFuzzyEqual for Angles

void testIsFuzzyEqualAnglesExpectTrue() {
    Angle one;
    one.value = 45;
    Angle two;
    two.value = 45;

    const bool result = isFuzzyEqual(one,two,e);

    assert(result == true);

}

void testIsFuzzyEqualAnglesExpectFalse() {
    Angle one;
    one.value = 45;
    Angle two;
    two.value = 35;

    const bool result = isFuzzyEqual(one,two,e);

    assert(result == false);
}

//test for isFuzzyEqual for Poses

void testIsFuzzyEqualPosesExpectTrue() {
    Pose one;
    one.position = {0.0,0.0};
    Pose two;
    two.position = {0.0,0.0};

    const bool result = isFuzzyEqual(one, two,e);
    assert(result == true);

    
}

void testIsFuzzyEqualPosesExpectFalse() {
    Pose one;
    one.position = {12.7,23.8};
    Pose two;
    two.position = {4.6,54.3};

    const bool result = isFuzzyEqual(one, two,e);
    assert(result == false);

}

int main(int /*argc*/, char ** /*argv*/)
{
    /*Run all test functions*/

    // LMT_SEL_BEGIN
    testIsFuzzyEqualPointsExpectTrue();
    testIsFuzzyEqualPointsExpectFalse();
    testIsFuzzyEqualAnglesExpectTrue();
    testIsFuzzyEqualAnglesExpectFalse();
    testIsFuzzyEqualPosesExpectTrue();
    testIsFuzzyEqualPosesExpectFalse();
    
    return EXIT_SUCCESS;
=======
#include "../../geometry2d/include/angle.h"
#include "../../geometry2d/include/geo_compare.h"
#include "../../geometry2d/include/line.h"
#include "../../geometry2d/include/point.h"
#include "../../geometry2d/include/pose.h"
#include <gtest/gtest.h>

#include <cassert>
#include <cmath>
#include <cstdlib>
#define e 0.0001

// tests for isFuzzyEqual for Points
TEST(isfuzzyEqualPoints, FuzzyEqualPointsExpectTrue) {

  Point one = {1.0, 2.0};
  Point two = {1.0, 2.0};

  Geo_compare geo(one);

  const bool result = geo.isFuzzyEqual(two, e);

  EXPECT_TRUE(result);
}

TEST(isfuzzyEqualPoints, FuzzyEqualPointsExpectFalse) {
  Point one = {1.0, 3.0};
  Point two = {1.0, 2.0};

  Geo_compare geo(one);

  const bool result = geo.isFuzzyEqual(two, e);

  EXPECT_FALSE(result);
}

// tests for isFuzzyEqual for Angles

TEST(isfuzzyEqualAngles, FuzzyEqualAnglesExpectTrue) {

  Angle one = {45};
  Angle two = {45};

  Geo_compare geo(one);

  const bool result = geo.isFuzzyEqual(two, e);

  EXPECT_TRUE(result);
}

TEST(isfuzzyEqualAngles, FuzzyEqualAnglesExpectFalse) {

  Angle one = {45};
  Angle two = {35};

  Geo_compare geo(one);

  const bool result = geo.isFuzzyEqual(two, e);

  EXPECT_FALSE(result);
}

// test for isFuzzyEqual for Poses

TEST(isfuzzyEqualPoses, FuzzyEqualPosesExpectTrue) {

  Point position = {0.0, 0.0};
  Angle angle = {0};
  Pose one = {position, angle};

  // one.position = {0.0};
  // one.orientation = 0;
  Point position1 = {0.0, 0.0};
  Angle angle1 = {0};
  Pose two = {position, angle};

  Geo_compare geo(one);

  const bool result = geo.isFuzzyEqual(two, e);

  EXPECT_TRUE(result);
>>>>>>> google_test
}

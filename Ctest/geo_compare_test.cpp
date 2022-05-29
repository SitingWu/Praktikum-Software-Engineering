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
}

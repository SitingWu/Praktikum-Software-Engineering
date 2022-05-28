#include "point.h"
#include "geo_compare.h"
#include <cmath>
#include <cassert>
#include <cstdlib>

#define e 0.0001
// LMT_SEL_BEGIN
// Creat Point
static void CreatPointTest_1()
{
    double distance = 1.5;
    Angle angel = {M_PI};
    const Point tmp = createPoint(distance, angel);
    // x=1.5*cos(pi)=-1.5
    // y=1.5*sin(pi)=0;
    const bool result = isFuzzyEqual(tmp.x, -1.5, e) && isFuzzyEqual(tmp.y, 0, e);

    assert(result == true);
}
// 0.5*Pi
static void CreatPointTest_2()
{
    double distance = 1.53;
    Angle angel = {0.5 * M_PI};
    const Point tmp = createPoint(distance, angel);
    // x=1.5*cos(0.5*pi)=0
    // y=1.5*sin(0.5*pi)=1.53;
    const bool result = isFuzzyEqual(tmp.x, 0, e) && isFuzzyEqual(tmp.y, 1.53, e);

    assert(result == true);
}
// Pi/3
static void CreatPointTest_3()
{
    double distance = 1.5;
    Angle angel = {M_PI / 3};
    const Point tmp = createPoint(distance, angel);
    const bool result = isFuzzyEqual(tmp.x, 0.75, e) && isFuzzyEqual(tmp.y, 1.5 * sqrt(3) / 2, e);
    assert(result == true);
}
// 2Pi/3
static void CreatPointTest_4()
{
    double distance = 1.5;
    Angle angel = {2 * M_PI / 3};
    const Point tmp = createPoint(distance, angel);
    const bool result = isFuzzyEqual(tmp.x, -0.75, e) && isFuzzyEqual(tmp.y, 1.5 * sqrt(3) / 2, e);
    assert(result == true);
}
// 3Pi/2
static void CreatPointTest_5()
{
    double distance = 1.5;
    Angle angel = {3 * M_PI / 2};
    const Point tmp = createPoint(distance, angel);

    const bool result = isFuzzyEqual(tmp.x, -1.5, e) && isFuzzyEqual(tmp.y, 0, e);

    assert(result == true);
}
// 5Pi/3
static void CreatPointTest_6()
{
    double distance = 1.5;
    Angle angel = {5 * M_PI / 3};
    const Point tmp = createPoint(distance, angel);

    const bool result = isFuzzyEqual(tmp.x, -1.5 * sqrt(3) / 2, e) && isFuzzyEqual(tmp.y, 0.75, e);
    assert(result == true);
}

// isEqual_test
static void isEqual_ExpectTrue()
{ // zwei same Point
    Point one = {1.2, 2.4};
    Point two = {1.2, 2.4};
    const bool result = isEqual(one, two);
    assert(result == true);
}
static void isEqual_ExpectFalseX()
{ // zwei different Point
    Point one = {1.2, 2.4};
    Point two = {1.3, 2.4};
    const bool result = isEqual(one, two);
    assert(result == false);
}
static void isEqual_ExpectFalseY()
{ // zwei different Point
    Point one = {1.2, 2.4};
    Point two = {1.2, 2.6};
    const bool result = isEqual(one, two);
    assert(result == false);
}
static void isEqual_ExpectFalseXY()
{ // zwei different Point
    Point one = {1.2, 2.4};
    Point two = {1.3, 2.41};
    const bool result = isEqual(one, two);
    assert(result == false);
}
// getLength_test
static void getLengthExpectTrue_1()
{
    Point p = {3, 4};
    const double tmp = getLength(p);
    const bool result = isFuzzyEqual(tmp, 5, e);

    assert(result == true);
}
static void getLengthExpectTrue_2()
{
    Point p = {-3, -4};
    const double tmp = getLength(p);
    const bool result = isFuzzyEqual(tmp, 5, e);

    assert(result == true);
}
static void getLengthExpectTrue_3()
{
    Point p = {-1.5789, 20.58547};
    const double tmp = getLength(p);
    const bool result = isFuzzyEqual(tmp, 20.6459318106715639, e);

    assert(result == true);
}
static void getLengthExpectTrue_4()
{
    Point p = {-33.839, -200.58547};
    const double tmp = getLength(p);
    const bool result = isFuzzyEqual(tmp, 203.419784, e);

    assert(result == true);
}

// distanceTo_test
static void distanceToExpectTrue_1()
{
    Point one = {27.46, -19.63};
    Point two = {-107.5479, 16.51};
    const double tmp = distanceTo(one, two);
    const bool result = isFuzzyEqual(tmp, 139.761342, e);

    assert(result == true);
}

static void distanceToExpectTrue_2()
{
    Point one = {-7.46, -4.163};
    Point two = {17.45879, 6.51};
    const double tmp = distanceTo(one, two);
    const bool result = isFuzzyEqual(tmp, 27.108283, e);

    assert(result == true);
}
static void distanceToExpectTrue_3()
{
    Point one = {-176.46, 1058.163};
    Point two = {517.45879, 6.51};
    const double tmp = distanceTo(one, two);
    const bool result = isFuzzyEqual(tmp, 1259.959253, e);

    assert(result == true);
}

// addPoints_test
static void addPointsTest_1()
{
    Point one = {1.4859, -5.38972};
    Point two = {M_PI, 5.392};
    const Point tmp = addPoints(one, two);
    const bool result = isFuzzyEqual(tmp.x, 4.6274926535897932, e) && isFuzzyEqual(tmp.y, 0.00228, e);

    assert(result == true);
}
static void addPointsExpectTrue_2()
{
    Point one = {-3 * M_PI / 2, M_PI / 2};
    Point two = {M_PI, -M_PI / 4};
    const Point tmp = subtractPoints(one, two);
    const bool result = isFuzzyEqual(tmp.x, -M_PI / 2, e) && isFuzzyEqual(tmp.y, -M_PI / 4, e);

    assert(result == true);
}

// subtractPoints
static void subtractPointsTest_1()
{
    Point one = {-3 * M_PI / 2, M_PI / 2};
    Point two = {M_PI, -M_PI / 4};
    const Point tmp = addPoints(one, two);
    const bool result = isFuzzyEqual(tmp.x, -5 * M_PI / 2, e) && isFuzzyEqual(tmp.y, 3 * M_PI / 4, e);

    assert(result == true);
}
static void subtractPointsTest_2()
{
    Point one = {-3 * M_PI / 2, M_PI / 2};
    Point two = {-M_PI, M_PI / 4};
    const Point tmp = addPoints(one, two);
    const bool result = isFuzzyEqual(tmp.x, -M_PI / 2, e) && isFuzzyEqual(tmp.y, M_PI / 4, e);

    assert(result == true);
}

// multiplyPoint_test
static void multiplyPointTest_1()
{
    Point one = {1.47594, 4.3290};
    double factor = 1.5;
    const Point tmp = multiplyPoint(one, two);
    const bool result = isFuzzyEqual(tmp.x, one.x * factor, e) && isFuzzyEqual(tmp.y, one.y * factor, e);
    assert(result == true);
}

// rotate_test
static void rotateTest_1()
{
    Point &point = {1.47594, 4.3290};
    Angle angle = {M_PI};
    rotate(point, angle);
    const bool result = isFuzzyEqual(point.x, 4.329, e) && isFuzzyEqual(point.y, -1.47594, e);
    assert(result == true);
}
stataic void rotateTest_2()
{
    Point &point = {-1.47594, -4.3290};
    Angle angle = {-M_PI / 2};
    rotate(point, angle);
    const bool result = isFuzzyEqual(point.x, 2.0174180731321, e) && isFuzzyEqual(point.y, -4.104712438381, e);
    assert(result == true);
}
static void rotateTest_3()
{
    Point &point = {1.47594, -4.3290};
    Angle angle = {3 * M_PI / 2};
    rotate(point, angle);
    const bool result = isFuzzyEqual(point.x, 4.329, e) && isFuzzyEqual(point.y, 1.47594, e);
    assert(result == true);
}
// LMT_SEL_END
int main(int /*argc*/, char ** /*argv*/)
{
    /*Run all test functions*/

    // LMT_SEL_BEGIN
    CreatPointTest_1();
    CreatPointTest_2();
    CreatPointTest_3();
    CreatPointTest_4();
    CreatPointTest_5();
    CreatPointTest_6();
    isEqual_ExpectTrue();
    isEqual_ExpectFalseX();
    isEqual_ExpectFalseY();
    isEqual_ExpectFalseXY();
    getLengthExpectTrue_1();
    getLengthExpectTrue_2();
    getLengthExpectTrue_3();
    getLengthExpectTrue_4();
    distanceToExpectTrue_1();
    distanceToExpectTrue_2();
    distanceToExpectTrue_3();
    addPointsTest_1();
    addPointsTest_2();
    subtractPointsTest_1();
    subtractPointsTest_2();
    multiplyPointTest_1();
    rotateTest_1();
    rotateTest_2();
    rotateTest_3();
    return EXIT_SUCCESS;
}
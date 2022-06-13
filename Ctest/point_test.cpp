#include <gtest/gtest.h>
#include "point.h"
#include <cmath>
#include <cassert>
#include <cstdlib>
#include <stdio.h>
#include "geo_compare.h"
#include "compare.h"
#define e 0.0001
// LMT_SEL_BEGIN
// Creat Point
TEST(creatPointGoogleTest,CreatPointTest_1)
{
    double distance = 1.5;
    Angle angel = {M_PI};
    Point tmp = createPoint(distance,angel);
    const Point p ={-1.5,0};
    // x=1.5*cos(pi)=-1.5
    // y=1.5*sin(pi)=0;
    const bool result = isFuzzyEqual(tmp,p, e);

    EXPECT_TRUE(result);
}
// 0.5*Pi
TEST(creatPointGoogleTest,CreatPointTest_2)
{
    double distance = 1.53;
    Angle angel = {0.5 * M_PI};
    const Point tmp = createPoint(distance, angel);
    // x=1.5*cos(0.5*pi)=0
    // y=1.5*sin(0.5*pi)=1.53;
    const bool result = isFuzzyEqual(tmp.x, 0, e) && isFuzzyEqual(tmp.y, 1.53, e);

    EXPECT_TRUE(result);
}
// Pi/3
TEST(creatPointGoogleTest,CreatPointTest_3)
{
    double distance = 1.5;
    Angle angel = {M_PI / 3};
    const Point tmp = createPoint(distance, angel);
    const bool result = isFuzzyEqual(tmp.x, 0.75, e) && isFuzzyEqual(tmp.y, 1.5 * sqrt(3) / 2, e);
    EXPECT_TRUE(result);
}
// 2Pi/3
TEST(creatPointGoogleTest, CreatPointTest_4)
{
    double distance = 1.5;
    Angle angel = {2 * M_PI / 3};
    const Point tmp = createPoint(distance, angel);
    const bool result = isFuzzyEqual(tmp.x, -0.75, e) && isFuzzyEqual(tmp.y, 1.5 * sqrt(3) / 2, e);
    EXPECT_TRUE(result);
}

// isEqual_test
TEST(isEqualGoogleTest,isEqual_ExpectTrue)
{ // zwei same Point
    Point one = {1.2, 2.4};
    Point two = {1.2, 2.4};
    const bool result = isEqual(one, two);
    EXPECT_TRUE(result);
}
TEST(isEqualGoogleTest, isEqual_ExpectFalseX)
{ // zwei different Point
    Point one = {1.2, 2.4};
    Point two = {1.3, 2.4};
    const bool result = isEqual(one, two);
    EXPECT_FALSE(result );
}
TEST(isEqualGoogleTest,isEqual_ExpectFalseY)
{ // zwei different Point
    Point one = {1.2, 2.4};
    Point two = {1.2, 2.6};
    const bool result = isEqual(one, two);
    EXPECT_FALSE(result);
}
TEST(isEqualGoogleTest,isEqual_ExpectFalseXY)
{ // zwei different Point
    Point one = {1.2, 2.4};
    Point two = {1.3, 2.41};
    const bool result = isEqual(one, two);
    EXPECT_FALSE(result);
}
// getLength_test
TEST(getLengthGoogleTest, getLengthExpectTrue_1)
{
    Point p = {3, 4};
    const double tmp = getLength(p);
    const bool result = isFuzzyEqual(tmp, 5, e);

    EXPECT_TRUE(result);
}
TEST(getLengthGoogleTest, getLengthExpectTrue_2)
{
    Point p = {-3, -4};
    const double tmp = getLength(p);
    const bool result = isFuzzyEqual(tmp, 5, e);

    EXPECT_TRUE(result);
}
TEST(getLengthGoogleTest, getLengthExpectTrue_3)
{
    Point p = {-1.5789, 20.58547};
    const double tmp = getLength(p);
    const bool result = isFuzzyEqual(tmp, 20.6459318106715639, e);

    EXPECT_TRUE(result);
}
TEST(getLengthGoogleTest, getLengthExpectTrue_4)
{
    Point p = {-33.839, -200.58547};
    const double tmp = getLength(p);
    const bool result = isFuzzyEqual(tmp, 203.419784, e);

    EXPECT_TRUE(result);
}

// distanceTo_test
TEST(distanceToGoogleTest,distanceToExpectTrue_1)
{
    Point one = {27.46, -19.63};
    Point two = {-107.5479, 16.51};
    const double tmp = distanceTo(one, two);
    const bool result = isFuzzyEqual(tmp, 139.761342, e);

    EXPECT_TRUE(result);
}

TEST(getLengthGoogleTest, distanceToExpectTrue_2)
{
    Point one = {-7.46, -4.163};
    Point two = {17.45879, 6.51};
    const double tmp = distanceTo(one, two);
    const bool result = isFuzzyEqual(tmp, 27.108283, e);

    EXPECT_TRUE(result);
}
TEST(getLengthGoogleTest,distanceToExpectTrue_3)
{
    Point one = {-176.46, 1058.163};
    Point two = {517.45879, 6.51};
    const double tmp = distanceTo(one, two);
    const bool result = isFuzzyEqual(tmp, 1259.959253, e);

    EXPECT_TRUE(result );
}

// addPoints_test
TEST(addPointsGoogleTest,addPointsTest_1)
{
    Point one = {1.4859, -5.38972};
    Point two = {M_PI, 5.392};
    const Point tmp = addPoints(one, two);
    const bool result = isFuzzyEqual(tmp.x, 4.6274926535897932, e) && isFuzzyEqual(tmp.y, 0.00228, e);

    EXPECT_TRUE(result );
}
TEST(addPointsGoogleTest, addPointsTest_2)
{
    Point one = {-3 * M_PI / 2, M_PI / 2};
    Point two = {M_PI, -M_PI / 4};
    const Point tmp = addPoints(one, two);
    const bool result = isFuzzyEqual(tmp.x, -M_PI / 2, e) && isFuzzyEqual(tmp.y, M_PI / 4, e);

    EXPECT_TRUE(result);
}

// subtractPoints
TEST(subtractPointsGoogleTest,subtractPointsTest_1)
{
    Point one = {-3 * M_PI / 2, M_PI / 2};
    Point two = {M_PI, -M_PI / 4};
    const Point tmp = subtractPoints(one, two);
    const bool result = isFuzzyEqual(tmp.x, -5 * M_PI / 2, e) && isFuzzyEqual(tmp.y, 3 * M_PI / 4, e);

    EXPECT_TRUE(result);
}
TEST(subtractPointsGoogleTest,subtractPointsTest_2)
{
    Point one = {-3 * M_PI / 2, M_PI / 2};
    Point two = {-M_PI, M_PI / 4};
    const Point tmp = subtractPoints(one, two);
    const bool result = isFuzzyEqual(tmp.x, -M_PI / 2, e) && isFuzzyEqual(tmp.y, M_PI / 4, e);

    EXPECT_TRUE(result);
}

// multiplyPoint_test
TEST(multiplyPointGoogleTest, multiplyPointTest_1)
{
    Point one = {1.47594, 4.3290};
    double factor = 1.5;
    const Point tmp = multiplyPoint(one, factor);
    const bool result = isFuzzyEqual(tmp.x, one.x * factor, e) && isFuzzyEqual(tmp.y, one.y * factor, e);
    EXPECT_TRUE(result);
}

// rotate_test
TEST(rotateGoogleTest, rotateTest_1)
{
    Point point = {1.47, 4.3};
    Angle angle = {M_PI};
    rotate(point, angle); 
   // printf("xVal=%f /n", point.x);
   // printf("yVal=%f /n", point.y);
    const bool result = isFuzzyEqual(point.y,-4.3, e)&& isFuzzyEqual(point.x, -1.47, e);
    EXPECT_TRUE(result);
}
TEST(rotateGoogleTest, rotateTest_2)
{
    Point point = {-1.47, -4.3};
    Angle angle = {-M_PI / 2};
    rotate(point, angle);
 
    const bool result = isFuzzyEqual(point.x, -4.3, e) &&isFuzzyEqual(point.y,1.47000241513897, e);
    EXPECT_TRUE(result);
}
TEST(rotateGoogleTest,  rotateTest_3)
{
    Point point = {1.475, -4.32};
    Angle angle = {3 * M_PI / 2};
    rotate(point, angle);
    const bool result = isFuzzyEqual(point.x, -4.32, e) && isFuzzyEqual(point.y, -1.4749927208806834, e);
    EXPECT_TRUE(result);
}

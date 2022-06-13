#include "../../geometry2d/include/line.h"
#include "../../geometry2d/include/point.h"
#include "../../geometry2d/include/geo_compare.h"
#include "../../geometry2d/include/angle.h"
#include "../../geometry2d/include/pose.h"


#include <cassert>
#include <cstdlib>
#include <cmath>
#define e 0.0001

//tests for fixAngleRange

void testFixAngleRangeFor45() {
    const double angle = 270;
    const bool result = fixAngleRange(45) == 1.0177;
    assert(result == true);

}

void testFixAngleRangeFor120() {
    const double angle = 120;
    const bool result = fixAngleRange(45) == 0.619479;
    assert(result == true);

}

//tests for convertFromDegreeToRadiant

void testConvertFrom360DegreeToRadiantExpect2PI(){
    const double angle = 360;
    Angle ang;
    ang.value = 2*M_PI;
    const bool result = isFuzzyEqual(convertFromDegreeToRadiant(angle),ang,e);
    assert(result == true);
}

void testConvertFrom180DegreeToRadiantExpectPI(){
    const double angle = 180;
    Angle ang;
    ang.value = M_PI;
    const bool result = isFuzzyEqual(convertFromDegreeToRadiant(angle),ang,e);
    assert(result == true);
}

void testConvertFrom0DegreeToRadiantExpect0(){
    const double angle = 0;
    Angle ang;
    ang.value = 0;
    const bool result = isFuzzyEqual(convertFromDegreeToRadiant(angle),ang,e);
    assert(result == true);
}

//test for getValueBetweenMinusPiAndPi

void testGetValueBetweenMinusPiAndPiFor60() {
    Angle angle;
    angle.value = 60;
    const bool result = getValueBetweenMinusPiAndPi(angle) == -2.83185;
    assert(result == true);
}

//test for getValueBetweenZeroAndTwoPi

void testGetValueBetweenZeroAndTwoPi() {
    Angle angle;
    angle.value = 520;
    const bool result = getValueBetweenZeroAndTwoPi(angle) == 4.7788;
    assert(result == true);

}

//test for multiplyAngle

void testMultiplyAngle() {
    Angle angle;
    angle.value = 90;
    double factor = 2.5;

    Angle ang1;
    ang1.value = -1.19467;
    const bool result = isFuzzyEqual(multiplyAngle(angle,factor),ang1,e);
    assert(result == true);
}

//test for addAngles
void testAddAngles() {

    Angle angle1;
    angle1.value = 90;
    Angle angle2;
    angle2.value = 45;
    Angle expAngle;
    expAngle.value = 3.05311;
    
    const bool result = isFuzzyEqual(addAngles(angle1,angle2),expAngle,e);
    assert(result == true);
}

//test for subtractAngles
void testSubtractAngles() {

    Angle angle1;
    angle1.value = 90;
    Angle angle2;
    angle2.value = 45;
    Angle expAngle;
    expAngle.value = 1.01771;
    
    const bool result = isFuzzyEqual(subtractAngles(angle1,angle2),expAngle,e);
    assert(result == true);
}


//test for subtractAngles
void testCreateAngle() {
    Point one = {1,1};
    Point two = {3,3};



}


int main(int /*argc*/, char ** /*argv*/)
{
    /*Run all test functions*/

    // LMT_SEL_BEGIN
   // testFixAngleRangeFor45();
   // testFixAngleRangeFor120();
    testConvertFrom0DegreeToRadiantExpect0();
    testConvertFrom180DegreeToRadiantExpectPI();
    testConvertFrom360DegreeToRadiantExpect2PI();
   // testGetValueBetweenMinusPiAndPiFor60();
   // testGetValueBetweenZeroAndTwoPi();
    testMultiplyAngle();
    testAddAngles();
    testSubtractAngles();
    testCreateAngle();




    return EXIT_SUCCESS;
}

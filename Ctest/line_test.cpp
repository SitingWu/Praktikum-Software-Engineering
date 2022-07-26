#include "../../geometry2d/include/line.h"
#include "../../geometry2d/include/point.h"
#include "../../geometry2d/include/geo_compare.h"
#include "../../geometry2d/include/angle.h"
#include "../../geometry2d/include/pose.h"


#include <cassert>
#include <cstdlib>
#include <cmath>
#define ep 0.0001

//test for createLine

void testCreateLine(){
    Point start = {5,3};

    Angle angle;
    angle.value = 45;
    double distance = 5;

    Line expLine;
    expLine.start = {5,3};
    expLine.end = {2.62661,4.25452};

    Line line = createLine(start, angle, distance);

    const bool result = isFuzzyEqual(line.start,expLine.start,ep)
                     && isFuzzyEqual(line.end,expLine.end,ep);

    assert(result == true);
}

//test for getDirection

void testGetDirection_1(){
    Line line;
    Point s = {1,1};
    Point e = {3,3};

    line.start = s;
    line.end = e;
    Angle ang;
    double exp = 0.785398;
    ang.value = exp;

    const bool result = isFuzzyEqual(getDirection(line),ang,ep);
    assert(result == true);

}


void testGetDirection_2(){
    Line line;
    Point s = {0,0};
    Point e = {13,14.5};

    line.start = s;
    line.end = e;
    Angle ang;
    double exp = 0.730907;
    ang.value = exp;

    const bool result = isFuzzyEqual(getDirection(line),ang,ep);
    assert(result == true);
}

//test for getLength

//{1.1},{3.3}
void testGetLengthExpectsqrt8() {
    Line line;
    Point s = {1,1};
    Point e = {3,3};
    line.start = s;
    line.end = e;
    const bool result = getLength(line) == sqrt(8);
    assert(result == true);
}

//{7.1},{4.4}
void testGetLengthexpect3() {
    Line line;
    Point s = {7,1};
    Point e = {4,4};
    line.start = s;
    line.end = e;
    const bool result = getLength(line) == 3;
    assert(result == true);
}

//tests for shiftParallel

void testShiftParallel(){
    Line line;
    Point s = {1,1};
    Point e = {3,3};
    line.start = s;
    line.end = e;
    Point newPointOfLine = {5,1};
    Point expPoint = {7,3};

    shiftParallel(line,newPointOfLine);

    const bool result = isFuzzyEqual(line.start,newPointOfLine,ep) &&
                        isFuzzyEqual(line.end,expPoint,ep);
    assert(result == true);

}


int main(int /*argc*/, char ** /*argv*/)
{
    /*Run all test functions*/

    // LMT_SEL_BEGIN
   
    //testCreateLine();
    testGetDirection_1();
    //testGetDirection_2();
    //testGetLengthexpect3();
    testGetLengthExpectsqrt8();
    testShiftParallel();
    return EXIT_SUCCESS;
}

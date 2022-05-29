#include "pose.h"

#include <cassert>
#include <cstdlib>
#include <cmath>
#include "geo_compare.h"
#define e 0.000001
// LMT_SEL_BEGIN
//distanceTo
static void distanceToTest_1()
{   
    //Point : double x{0,0} ; double y{0,0}
    //Angle : double angle{0,0}
    Pose one = {27.46, -19.63,0};
    Pose two = {-107.5479, 16.51,0};
    const double tmp = distanceTo(one,two);
    const bool result = isFuzzyEqual(tmp ,139.761342 , e);
    assert(result == true);

}
static void distanceToTest_2()
{   

    Pose one = {-7.46, -4.163,0};
    Pose two = {17.45879, 6.51,0};
    const double tmp = distanceTo(one,two);
    const bool result = isFuzzyEqual(tmp ,27.108283 , e);
    assert(result == true);

}
static void distanceToTest_3()
{   

    Pose one = {-176.46, 1058.163,0};
    Pose two = {517.45879, 6.51,0};
    const double tmp = distanceTo(one,two);
    const bool result = isFuzzyEqual(tmp ,1259.959253 , e);
    assert(result == true);

}

//getRelativeOrientationTo_test
static void getRelativeOrientationToTest_1()
{
    Pose source={0,M_PI/4 ,M_PI }; 
    Point point ={ 1,M_PI/2};
    //atan2(point -source) [-pi;pi]//0.665773750028
    const Angle A={-2.4758189035617932};
    const Angle tmp = getRelativeOrientationTo(source,point);
    const bool result = isFuzzyEqual(tmp , A, e);
    assert(result==true);


}

//isEqual
static void isEqualTest_1()
{   
    Pose one={ 1,5.0100001 ,0};
    Pose two={ 1,5.01 ,0 };
    const bool result = isEqual(one,two);
    assert(result ==true);
}
static void isEqualTest_2()
{   
    Pose one={ 1+e,5.01 ,0};
    Pose two={ 1,5.01+e,0};
    const bool result = isEqual(one,two);
    assert(result ==true);
}
static void isEqualTest_3()
{   
    Pose one={ 1.0000001,5.01 ,0};
    Pose two={ 1,5.010001 ,0.000001 };
    const bool result = isEqual(one,two);
    assert(result ==true);
}

//addPoses
static void addPosesTest_1()
{
    Pose one  = { 1.56465, 10.4564,M_PI};
    Pose two = { -6.154665, 1.168452132,-M_PI };
    Pose p = {-4.590015 , 11.624852132,0 };
    const Pose tmp = addPoses(one , two);
    const bool result = isFuzzyEqual(tmp,p ,e);

}
static void addPosesTest_2()
{
    Pose one  = { 1.56465, 10.4564,2*M_PI};
    Pose two = { -6.154665, 1.168452132,M_PI/2 };
    Pose p = {-4.590015 , 11.624852132,5*M_PI/2 };
    const Pose tmp = addPoses(one , two);
    const bool result = isFuzzyEqual(tmp,p ,e);

}
//subtractPoses
static void subtractPosesTest_1()
{
    Pose one = {-16.9125323 , 10.78654,M_PI };
    Pose two = { 21.4584564, 2.756 ,-M_PI };
    Pose p = {-16.9125323 ,8.03054, 2*M_PI};
    const Pose tmp = subtractPoses(one,two);
    const bool result =isFuzzyEqual(tmp,p,e);


}
int main(int /*argc*/, char** /*argv*/)
{
    /*Run all test funcitons*/
    distanceToTest_1();
    distanceToTest_2();
    distanceToTest_3();
    getRelativeOrientationToTest_1();
    isEqualTest_1();
    isEqualTest_2();
    isEqualTest_3();
    addPosesTest_1();
    addPosesTest_2();
    subtractPosesTest_1();

    return EXIT_SUCCESS;

}
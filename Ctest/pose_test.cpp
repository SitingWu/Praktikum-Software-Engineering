#include "pose.h"
#include <gtest/gtest.h>
#include <cassert>
#include <cstdlib>
#include <cmath>
#include "geo_compare.h"
#define e 0.000001
// LMT_SEL_BEGIN
//distanceTo
TEST(distanceToGoogle,distanceToTest_1)
{   
    //Point : double x{0,0} ; double y{0,0}
    //Angle : double angle{0,0}
    Pose one = {27.46, -19.63,0};
    Pose two = {-107.5479, 16.51,0};
    const double tmp = distanceTo(one,two);
    const bool result = isFuzzyEqual(tmp ,139.761342 , e);
    EXPECT_TRUE(result);

}
TEST(distanceToGoogle,distanceToTest_2)
{   

    Pose one = {-7.46, -4.163,0};
    Pose two = {17.45879, 6.51,0};
    const double tmp = distanceTo(one,two);
    const bool result = isFuzzyEqual(tmp ,27.108283 , e);
    EXPECT_TRUE(result);

}
TEST(distanceToGoogle, distanceToTest_3)
{   

    Pose one = {-176.46, 1058.163,0};
    Pose two = {517.45879, 6.51,0};
    const double tmp = distanceTo(one,two);
    const bool result = isFuzzyEqual(tmp ,1259.959253 , e);
    EXPECT_TRUE(result);

}

//getRelativeOrientationTo_test
TEST(GROT_google_test ,getRelativeOrientationToTest_1)
{
    Pose source={0,M_PI/4 ,M_PI }; 
    Point point ={ 1,M_PI/2};
    //atan2(point -source) [-pi;pi]//0.665773750028
    const Angle A={-2.4758189035617932};
    const Angle tmp = getRelativeOrientationTo(source,point);
    const bool result = isFuzzyEqual(tmp , A, e);
    EXPECT_TRUE(result);


}

//isEqual
TEST(isEqualGoogleTest, isEqualTest_1)
{   
    Pose one={ 1,5.0100001 ,0};
    Pose two={ 1,5.01 ,0 };
    const bool result = isEqual(one,two);
    EXPECT_TRUE(result);
}
TEST(isEqualGoogleTest, isEqualTest_2)
{   
    Pose one={ 1+e,5.01 ,0};
    Pose two={ 1,5.01+e,0};
    const bool result = isEqual(one,two);
    EXPECT_TRUE(result);
}
TEST(isEqualGoogleTest, isEqualTest_3)
{   
    Pose one={ 1.0000001,5.01 ,0};
    Pose two={ 1,5.010001 ,0.000001 };
    const bool result = isEqual(one,two);
    EXPECT_TRUE(result);
}

//addPoses
TEST(addPosesGoogleTest,addPosesTest_1)
{
    Pose one  = { 1.56465, 10.4564,M_PI};
    Pose two = { -6.154665, 1.168452132,-M_PI };
    Pose p = {-4.590015 , 11.624852132,0 };
    const Pose tmp = addPoses(one , two);
    const bool result = isFuzzyEqual(tmp,p ,e);
    EXPECT_TRUE(result);

}
TEST(addPosesGoogleTest, addPosesTest_2)
{
    Pose one  = { 1.56465, 10.4564,2*M_PI};
    Pose two = { -6.154665, 1.168452132,M_PI/2 };
    Pose p = {-4.590015 , 11.624852132,5*M_PI/2 };
    const Pose tmp = addPoses(one , two);
    const bool result = isFuzzyEqual(tmp,p ,e);
    EXPECT_TRUE(result);

}
//subtractPoses
TEST(subtractPosesGoogleTest, subtractPosesTest_1)
{
    Pose one = {-16.9125323 , 10.78654,M_PI };
    Pose two = { 21.4584564, 2.756 ,-M_PI };
    Pose p = {-38.3709887 ,8.03054, 2*M_PI};
    const Pose tmp = subtractPoses(one,two);
    const bool result =isFuzzyEqual(tmp,p,e);
    EXPECT_TRUE(result);

}

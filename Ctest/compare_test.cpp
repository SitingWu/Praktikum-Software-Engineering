#include <gtest/gtest.h>
#include "compare.h"
#include <string>


/*#include <cassert>
#include <cstdlib> */

#define e 0.0000000000001 //zu klein fuer StrictFuzzy

// LMT_SEL_BEGIN
//Equal
//v1=v2
TEST(isFuzzyEqualGoogleTest,testIsFuzzyEqualExpectTrue)
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845315;
    const double epsilon = 0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    EXPECT_TRUE(result);
}
//kleiner
TEST(isFuzzyEqualGoogleTest,testIsFuzzyEqualForSmallerExpectTrue) 
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.0124567984531599;
    const double epsilon = 0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    EXPECT_TRUE(result) ;
}

//v1-v2 =epsilon(Gleich)
TEST(isFuzzyEqualGoogleTest,testIsFuzzyEqualToEpsilonExpectFalse) 
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845305;
    const double epsilon = 0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    EXPECT_FALSE(result);
}
//abs Größer als e
TEST(isFuzzyEqualGoogleTest,testIsFuzzyEqualGreaterExpectFalse) 
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.012456798453263;
    const double epsilon = e;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    EXPECT_FALSE(result);
}


//negative 
//abs kleiner als e
TEST(isFuzzyEqualGoogleTest, testIsFuzzyEqualForNegativeExpectTrue) 
{
    const double Value1  = -1.01245679845315;
    const double Value2  = -1.012456798453059;
    const double epsilon =  0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    EXPECT_TRUE(result);
}
//abs größer als e
TEST(isFuzzyEqualGoogleTest,testIsFuzzyEqualForNegativeExpectFalse)  
{
    const double Value1  = -1.01245679845315;
    const double Value2  = -1.012456798453049;
    const double epsilon = 0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    EXPECT_FALSE(result);
}

//Greater:v1+e Größer als v2

//v1+e>v2
TEST(isFuzzyGreaterGoogleTest, testIsFuzzyGreaterExpectTrue)
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.012456798453249;
    const double epsilon = e;
    const bool result = isFuzzyGreater(Value1,Value2,epsilon);
    EXPECT_TRUE(result);
}
//gleich :v1+e=v2
TEST(isFuzzyGreaterGoolgeTest,testIsFuzzyGreaterEqualExpectFalse)
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845325;
    const double epsilon = e;
    const bool result = isFuzzyGreater(Value1,Value2,epsilon);
    EXPECT_FALSE(result) ;
}
//kleiner :v1+e<v2
TEST(isFuzzyGreaterGoogleTest, testIsFuzzyGreaterKleinerExpectFalse)
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.012456798453251;
    const double epsilon = e;
    const bool result = isFuzzyGreater(Value1,Value2,epsilon);
    EXPECT_FALSE(result);
}



//Smaller :v1 <v2+e
//v1<v2+e
TEST(isFuzzySmallerGoogleTest,testIsFuzzySmallerExpectTrue)
{
    const double Value1  =1.01245679845310 ;
    const double Value2  =1.01245679845315 ;
    const double epsilon =e;
    const bool result = isFuzzySmaller(Value1,Value2,epsilon);
    EXPECT_TRUE(result);
}

//v1=v2+e
TEST (isFuzzySmallerGoogleTest,testIsFuzzySmallerEqualExpectFalse)
{
    const double Value1  =1.01245679845315 ;
    const double Value2  =1.01245679845305 ;
    const double epsilon =e;
    const bool result = isFuzzySmaller(Value1,Value2,epsilon);
    EXPECT_FALSE(result);

}

//v1>v2+e
TEST (isFuzzySmallerGoogleTest,testIsFuzzySmallerGrosserExpectFalse)
{
    const double Value1  =1.0124567984532501 ;
    const double Value2  =1.01245679845315 ;
    const double epsilon =e;
    const bool result = isFuzzySmaller(Value1,Value2,epsilon);
    EXPECT_FALSE(result);
}
//StrictGreater :v1>e+v2
//v1>e+v2
TEST(isStrictFuzzyGreaterGoogleTest, testStrictIsFuzzyGreaterExpectTrue)
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845304;
    const double epsilon = e;
    const bool result = isStrictFuzzyGreater(Value1,Value2,epsilon);
    EXPECT_TRUE(result);
}
//v1=e+v2
TEST(isStrictFuzzyGreaterGoogleTest,testStrictIsFuzzyGreaterEqualExpectFalse)
{
    const double Value1  = 1.000000002;
    const double Value2  = 1.000000001;
    const double epsilon = 0.000000001;
    const bool result = isStrictFuzzyGreater(Value1,Value2,epsilon);
    EXPECT_FALSE(result);
}
//v1<e+v2
TEST(isStrictFuzzyGreaterGoogleTest,testStrictIsFuzzyGreaterKleinerExpectFalse)
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845315;
    const double epsilon = e;
    const bool result = isStrictFuzzyGreater(Value1,Value2,epsilon);
    EXPECT_FALSE(result);
}

//StrictSmaller:v1+e<v2
TEST(isStrictFuzzySmallerGoogleTest,testIsStrictFuzzySmallerExpectTrue)
{
    const double Value1  = 1.01245679845304;
    const double Value2  = 1.01245679845315;
    const double epsilon = e;
    const bool result = isStrictFuzzySmaller(Value1,Value2,epsilon);
    EXPECT_TRUE(result);
}
//v1+e=v2
TEST(isStrictFuzzySmallerGoogleTest,testIsStrictFuzzySmallerEqualExpectFalse)
{
    const double Value1  = 1.0124565305;
    const double Value2  = 1.0124565315;
    const double epsilon = 0.000000001;
    const bool result = isStrictFuzzySmaller(Value1,Value2,epsilon);
    EXPECT_FALSE(result);
}
//v1+e>v2
TEST(isStrictFuzzySmallerGoogleTest, testIsStrictFuzzySmallerGrosserExpectFalse)
{
    const double Value1  = 1.01245679845306;
    const double Value2  = 1.01245679845315;
    const double epsilon = e;
    const bool result = isStrictFuzzySmaller(Value1,Value2,epsilon);
    EXPECT_FALSE(result);
}


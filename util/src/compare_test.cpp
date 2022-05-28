#include "compare.h"

#include <cassert>
#include <cstdlib>

#define e 0.0000000000001 //zu klein fuer StrictFuzzy

// LMT_SEL_BEGIN
//Equal
//v1=v2
static void testIsFuzzyEqualExpectTrue()
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845315;
    const double epsilon = 0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    assert(result == true);
}
//kleiner
static void testIsFuzzyEqualForSmallerExpectTrue() 
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.0124567984531599;
    const double epsilon = 0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    assert(result == true);
}

//v1-v2 =epsilon(Gleich)
static void testIsFuzzyEqualToEpsilonExpectFalse() 
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845305;
    const double epsilon = 0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    assert(result == false);
}
//abs Größer als e
static void testIsFuzzyEqualGreaterExpectFalse() 
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.012456798453263;
    const double epsilon = e;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    assert(result == false);
}


//negative 
//abs kleiner als e
static void testIsFuzzyEqualForNegativeExpectTrue() 
{
    const double Value1  = -1.01245679845315;
    const double Value2  = -1.012456798453059;
    const double epsilon =  0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    assert(result == true);
}
//abs größer als e
static void testIsFuzzyEqualForNegativeExpectFalse() 
{
    const double Value1  = -1.01245679845315;
    const double Value2  = -1.012456798453049;
    const double epsilon = 0.0000000000001;
    const bool result = isFuzzyEqual(Value1,Value2,epsilon);
    assert(result == false);
}

//Greater:v1+e Größer als v2

//v1+e>v2
static void testIsFuzzyGreaterExpectTrue()
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.012456798453249;
    const double epsilon = e;
    const bool result = isFuzzyGreater(Value1,Value2,epsilon);
    assert(result == true);
}
//gleich :v1+e=v2
static void testIsFuzzyGreaterEqualExpectFalse()
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845325;
    const double epsilon = e;
    const bool result = isFuzzyGreater(Value1,Value2,epsilon);
    assert(result == false);
}
//kleiner :v1+e<v2
static void testIsFuzzyGreaterKleinerExpectFalse()
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.012456798453251;
    const double epsilon = e;
    const bool result = isFuzzyGreater(Value1,Value2,epsilon);
    assert(result == false);
}

//Smaller :v1 <v2+e
//v1<v2+e
static void testIsFuzzySmallerExpectTrue()
{
    const double Value1  =1.01245679845310 ;
    const double Value2  =1.01245679845315 ;
    const double epsilon =e;
    const bool result = isFuzzySmaller(Value1,Value2,epsilon);
    assert(result == true);
}
//v1=v2+e
static void testIsFuzzySmallerEqualExpectFalse()
{
    const double Value1  =1.01245679845315 ;
    const double Value2  =1.01245679845305 ;
    const double epsilon =e;
    const bool result = isFuzzySmaller(Value1,Value2,epsilon);
    assert(result == false);
}
//v1>v2+e
static void testIsFuzzySmallerGrosserExpectFalse()
{
    const double Value1  =1.0124567984532501 ;
    const double Value2  =1.01245679845315 ;
    const double epsilon =e;
    const bool result = isFuzzySmaller(Value1,Value2,epsilon);
    assert(result == false);
}
//StrictGreater :v1>e+v2
//v1>e+v2
static void testStrictIsFuzzyGreaterExpectTrue()
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845304;
    const double epsilon = e;
    const bool result = isStrictFuzzyGreater(Value1,Value2,epsilon);
    assert(result == true);
}
//v1=e+v2
static void testStrictIsFuzzyGreaterEqualExpectFalse()
{
    const double Value1  = 1.000000002;
    const double Value2  = 1.000000001;
    const double epsilon = 0.000000001;
    const bool result = isStrictFuzzyGreater(Value1,Value2,epsilon);
    assert(result == false);
}
//v1<e+v2
static void testStrictIsFuzzyGreaterKleinerExpectFalse()
{
    const double Value1  = 1.01245679845315;
    const double Value2  = 1.01245679845315;
    const double epsilon = e;
    const bool result = isStrictFuzzyGreater(Value1,Value2,epsilon);
    assert(result == false);
}

//StrictSmaller:v1+e<v2
static void testIsStrictFuzzySmallerExpectTrue()
{
    const double Value1  = 1.01245679845304;
    const double Value2  = 1.01245679845315;
    const double epsilon = e;
    const bool result = isStrictFuzzySmaller(Value1,Value2,epsilon);
    assert(result == true);
}
//v1+e=v2
static void testIsStrictFuzzySmallerEqualExpectFalse()
{
    const double Value1  = 1.0124565305;
    const double Value2  = 1.0124565315;
    const double epsilon = 0.000000001;
    const bool result = isStrictFuzzySmaller(Value1,Value2,epsilon);
    assert(result == false);
}
//v1+e>v2
static void testIsStrictFuzzySmallerGrosserExpectFalse()
{
    const double Value1  = 1.01245679845306;
    const double Value2  = 1.01245679845315;
    const double epsilon = e;
    const bool result = isStrictFuzzySmaller(Value1,Value2,epsilon);
    assert(result == false);
}
int main(int /*argc*/, char** /*argv*/)
{
     /*
    Run all test functions
    LMT_SEL_BEGIN
    */
   testIsFuzzyEqualExpectTrue();
   testIsFuzzyEqualForNegativeExpectTrue();
   testIsFuzzyEqualForNegativeExpectFalse();
   testIsFuzzyEqualForSmallerExpectTrue();
   testIsFuzzyEqualGreaterExpectFalse();
   testIsFuzzyEqualToEpsilonExpectFalse();
   testIsFuzzyGreaterEqualExpectFalse();
   testIsFuzzyGreaterKleinerExpectFalse();
   testIsFuzzyGreaterExpectTrue();
   testIsFuzzySmallerEqualExpectFalse();
   testIsFuzzySmallerExpectTrue();
   testIsFuzzySmallerGrosserExpectFalse();
   testStrictIsFuzzyGreaterEqualExpectFalse();
   testStrictIsFuzzyGreaterExpectTrue();
   testStrictIsFuzzyGreaterKleinerExpectFalse();
   testIsStrictFuzzySmallerExpectTrue();
   testIsStrictFuzzySmallerEqualExpectFalse();
   testIsStrictFuzzySmallerGrosserExpectFalse();




    // LMT_SEL_END

    return EXIT_SUCCESS;
}

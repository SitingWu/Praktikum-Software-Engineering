#include "compare.h"
#include <gtest/gtest.h>
#include <string>

/*#include <cassert>
#include <cstdlib> */

#define e 0.0000000000001 // zu klein fuer StrictFuzzy

// LMT_SEL_BEGIN
// Equal
// v1=v2
TEST(isFuzzyEqualGoogleTest, testIsFuzzyEqualExpectTrue) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.01245679845315;
  const Compare compare(value1);
  const bool result = compare.isFuzzyEqual(value2, e);
  EXPECT_TRUE(result);
}
// kleiner
TEST(isFuzzyEqualGoogleTest, testIsFuzzyEqualForSmallerExpectTrue) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.0124567984531599;
  const Compare compare(value1);
  const bool result = compare.isFuzzyEqual(value2, e);

  EXPECT_TRUE(result);
}

// v1-v2 =epsilon(Gleich)
TEST(isFuzzyEqualGoogleTest, testIsFuzzyEqualToEpsilonExpectFalse) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.01245679845305;
  const Compare compare(value1);

  const bool result = compare.isFuzzyEqual(value2, e);

  EXPECT_FALSE(result);
}
// abs Größer als e
TEST(isFuzzyEqualGoogleTest, testIsFuzzyEqualGreaterExpectFalse) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.012456798453263;
  const Compare compare(value1);
  const bool result = compare.isFuzzyEqual(value2, e);
  EXPECT_FALSE(result);
}

// negative
// abs kleiner als e
TEST(isFuzzyEqualGoogleTest, testIsFuzzyEqualForNegativeExpectTrue) {
  const double value1 = -1.01245679845315;
  const double value2 = -1.012456798453059;
  const Compare compare(value1);
  const bool result = compare.isFuzzyEqual(value2, e);
  EXPECT_TRUE(result);
}
// abs größer als e
TEST(isFuzzyEqualGoogleTest, testIsFuzzyEqualForNegativeExpectFalse) {
  const double value1 = -1.01245679845315;
  const double value2 = -1.012456798453049;
  const Compare compare(value1);
  const bool result = compare.isFuzzyEqual(value2, e);
  EXPECT_FALSE(result);
}

// Greater:v1+e Größer als v2

// v1+e>v2
TEST(isFuzzyGreaterGoogleTest, testIsFuzzyGreaterExpectTrue) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.012456798453249;
  const Compare compare(value1);

  const bool result = compare.isFuzzyGreater(value2, e);

  EXPECT_TRUE(result);
}
// gleich :v1+e=v2
TEST(isFuzzyGreaterGoolgeTest, testIsFuzzyGreaterEqualExpectFalse) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.01245679845325;
  const Compare compare(value1);
  const bool result = compare.isFuzzyGreater(value2, e);
  EXPECT_FALSE(result);
}
// kleiner :v1+e<v2
TEST(isFuzzyGreaterGoogleTest, testIsFuzzyGreaterKleinerExpectFalse) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.012456798453251;
  const Compare compare(value1);
  const bool result = compare.isFuzzyGreater(value2, e);
  EXPECT_FALSE(result);
}

// Smaller :v1 <v2+e
// v1<v2+e
TEST(isFuzzySmallerGoogleTest, testIsFuzzySmallerExpectTrue) {
  const double value1 = 1.01245679845310;
  const double value2 = 1.01245679845315;
  const Compare compare(value1);
  const bool result = compare.isFuzzySmaller(value2, e);

  EXPECT_TRUE(result);
}

// v1=v2+e
TEST(isFuzzySmallerGoogleTest, testIsFuzzySmallerEqualExpectFalse) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.01245679845305;
  const Compare compare(value1);
  const bool result = compare.isFuzzySmaller(value2, e);
  EXPECT_FALSE(result);
}

// v1>v2+e
TEST(isFuzzySmallerGoogleTest, testIsFuzzySmallerGrosserExpectFalse) {
  const double value1 = 1.0124567984532501;
  const double value2 = 1.01245679845315;
  const Compare compare(value1);
  const bool result = compare.isFuzzySmaller(value2, e);
  EXPECT_FALSE(result);
}
// StrictGreater :v1>e+v2
// v1>e+v2
TEST(isStrictFuzzyGreaterGoogleTest, testStrictIsFuzzyGreaterExpectTrue) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.01245679845304;
  const Compare compare(value1);
  const bool result = compare.isStrictFuzzyGreater(value2, e);

  EXPECT_TRUE(result);
}
// v1=e+v2
TEST(isStrictFuzzyGreaterGoogleTest, testStrictIsFuzzyGreaterEqualExpectFalse) {
  const double value1 = 1.000000000000002;
  const double value2 = 1.000000000000001;
  const Compare compare(value1);
  const bool result = compare.isStrictFuzzyGreater(value2, e);
  EXPECT_FALSE(result);
}
// v1<e+v2
TEST(isStrictFuzzyGreaterGoogleTest,
     testStrictIsFuzzyGreaterKleinerExpectFalse) {
  const double value1 = 1.01245679845315;
  const double value2 = 1.01245679845315;
  const Compare compare(value1);
  const bool result = compare.isStrictFuzzyGreater(value2, e);
  EXPECT_FALSE(result);
}

// StrictSmaller:v1+e<v2
TEST(isStrictFuzzySmallerGoogleTest, testIsStrictFuzzySmallerExpectTrue) {
  const double value1 = 1.01245679845304;
  const double value2 = 1.01245679845315;
  const Compare compare(value1);
  const bool result = compare.isStrictFuzzySmaller(value2, e);

  EXPECT_TRUE(result);
}
// v1+e=v2
TEST(isStrictFuzzySmallerGoogleTest, testIsStrictFuzzySmallerEqualExpectFalse) {
  const double value1 = 1.01245600005305;
  const double value2 = 1.01245600005315;

  const Compare compare(value1);
  const bool result = compare.isStrictFuzzySmaller(value2, e);
  EXPECT_FALSE(result);
}
// v1+e>v2
TEST(isStrictFuzzySmallerGoogleTest,
     testIsStrictFuzzySmallerGrosserExpectFalse) {
  const double value1 = 1.01245679845306;
  const double value2 = 1.01245679845315;
  const Compare compare(value1);
  const bool result = compare.isStrictFuzzySmaller(value2, e);
  EXPECT_FALSE(result);
}

#include "../../geometry2d/include/angle.h"
#include "../../geometry2d/include/geo_compare.h"
#include "../../geometry2d/include/line.h"
#include "../../geometry2d/include/point.h"
#include "../../geometry2d/include/pose.h"
#include <gtest/gtest.h>

#include <cassert>
#include <cmath>
#include <cstdlib>
#define ep 0.0001

// test for createLine

TEST(createLine1, CreateLine_1) {

  Point start = {1, 1};
  Point end = {3.6266, 5.25452};
  const Angle angle = {45};
  const double distance = 5;

  Line expLine(start, end);
  Line line(start, angle, distance);

  Geo_compare geo(start);
  Geo_compare geo1(end);

  const bool result = geo.isFuzzyEqual(expLine.getStart(), ep) &&
                      geo1.isFuzzyEqual(expLine.getEnd(), ep);

  EXPECT_TRUE(result);
};

TEST(createLine2, CreateLine_2) {

  Point start = {-5, 3.5};
  Point end = {start.getX() + 9.8332, start.getY() + 10.792};
  Angle angle = {-62};
  double distance = 14.6;

  Line expLine(start, end);
  Line line(start, angle, distance);
  Geo_compare geo(start);
  Geo_compare geo1(end);
  // expLine.start = {-5, 3.5};
  // expLine.end = {9.8332 + start.x, 10.792 + start.y};

  const bool result = geo.isFuzzyEqual(expLine.getStart(), ep) &&
                      geo1.isFuzzyEqual(expLine.getEnd(), ep);

  EXPECT_TRUE(result);
}

// test for getDirection

TEST(getDirection, GetDirection_1) {

  Point s = {1, 1};
  Point e = {3, 3};
  Line line(s, e);

  double exp = 0.785398;
  Angle ang{exp};

  Geo_compare geo(ang);
  const bool result = geo.isFuzzyEqual(line.getDirection(), ep);
  EXPECT_TRUE(result);
}

// test for getLength

//{1.1},{3.3}
TEST(getLength, GetLengthExpectsqrt8) {

  Point s = {1, 1};
  Point e = {3, 3};
  Line line(s, e);

  double exp = sqrt(8);
  Compare com(exp);

  const bool result = com.isFuzzyEqual(line.getLength(), ep);

  EXPECT_TRUE(result);
}

//{1.1},{2.2}
TEST(getLength, GetLengthExpects3) {
  Point s = {1, 1};
  Point e = {2, 2};
  Line line(s, e);

  double exp = sqrt(2);
  Compare com(exp);

  const bool result = com.isFuzzyEqual(line.getLength(), ep);

  EXPECT_TRUE(result);
}

// tests for shiftParallel

TEST(shiftParallel, ShiftParallel_1) {
  Point s = {1, 1};
  Point e = {3, 3};

  Line line(s, e);

  Point newPointOfLine = {5, 1};
  Point expPoint = {7, 3};

  line.shiftParallel(newPointOfLine);

  Geo_compare geo(newPointOfLine);
  Geo_compare geo1(expPoint);

  const bool result = geo.isFuzzyEqual(line.getStart(), ep) &&
                      geo1.isFuzzyEqual(line.getEnd(), ep);
  EXPECT_TRUE(result);
}

TEST(getPerpendicularPoint, PerpendicularPoint) {

  Point start = {3, 0};
  Point end = {3, 3};
  Line line(start, end);

  // Point point = {12.5, 34.62};
  Point point = {87, 9};
  Point expPoint = {3, 9};

  Point p = line.getPerpendicularPoint(point);
  Geo_compare geo(expPoint);

  const bool result = geo.isFuzzyEqual(p, ep);
  EXPECT_TRUE(result);
}

TEST(getPerpendicularPoint, PerpendicularPoint_1) {

  Point start = {0, 0};
  Point end = {3, 3};
  Line line(start, end);

  Point point = {12.5, 34.62};
  Point expPoint = {23.56, 23.56};

  Point p = line.getPerpendicularPoint(point);
  Geo_compare geo(expPoint);

  const bool result = geo.isFuzzyEqual(p, ep);
  EXPECT_TRUE(result);
}

TEST(getPerpendicularPoint, PerpendicularPoint_2) {

  Point start = {0, 0};
  Point end = {3, 3};
  Line line(start, end);
  Point point = {2, 4};

  Point expPoint = {3, 3};

  Point p = line.getPerpendicularPoint(point);
  Geo_compare geo(expPoint);

  const bool result = geo.isFuzzyEqual(p, ep);
  EXPECT_TRUE(result);
}

TEST(getPerpendicularPoint, PerpendicularPoint_3) {

  Point start = {0, 0};
  Point end = {3, 3};
  Line line(start, end);

  Point point = {1, 1};
  Point expPoint = {1, 1};

  Point p = line.getPerpendicularPoint(point);
  Geo_compare geo(expPoint);

  const bool result = geo.isFuzzyEqual(p, ep);
  EXPECT_TRUE(result);
}

TEST(getPerpendicularPoint, PerpendicularPoint_4) {

  Point start = {0, 0};
  Point end = {3, 3};
  Line line(start, end);

  Point point = {4, 4};
  Point expPoint = {4, 4};

  Point p = line.getPerpendicularPoint(point);
  Geo_compare geo(expPoint);

  const bool result = geo.isFuzzyEqual(p, ep);
  EXPECT_TRUE(result);
}

TEST(getPerpendicularPoint, PerpendicularPoint_5) {

  Point start = {0, 1};
  Point end = {3, 4};
  Line line(start, end);

  Point point = {1, 2};

  Point expPoint = {1, 2};

  Point p = line.getPerpendicularPoint(point);
  Geo_compare geo(expPoint);

  const bool result = geo.isFuzzyEqual(p, ep);
  EXPECT_TRUE(result);
}

TEST(getPerpendicularPoint, PerpendicularPoint_6) {

  Point start = {5, 0};
  Point end = {5, 4};
  Line line(start, end);

  Point point = {2, 6};

  Point expPoint = {5, 6};

  Point p = line.getPerpendicularPoint(point);
  Geo_compare geo(expPoint);

  const bool result = geo.isFuzzyEqual(p, ep);
  EXPECT_TRUE(result);
}

TEST(getPerpendicularPoint, PerpendicularPoint_7) {

  Point start = {0, 5};
  Point end = {4, 5};
  Line line(start, end);
  Point point = {6, 2};

  Point expPoint = {6, 5};

  Point p = line.getPerpendicularPoint(point);
  Geo_compare geo(expPoint);

  const bool result = geo.isFuzzyEqual(p, ep);
  EXPECT_TRUE(result);
}

TEST(getPerpendicularPoint, PerpendicularPoint_8) {

  Point start = {0, 1};
  Point end = {3, 4};
  Line line(start, end);
  Point point = {5, 2};

  Point expPoint = {3, 4};

  Point p = line.getPerpendicularPoint(point);
  Geo_compare geo(expPoint);

  const bool result = geo.isFuzzyEqual(p, ep);
  EXPECT_TRUE(result);
}

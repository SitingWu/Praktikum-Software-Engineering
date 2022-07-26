#geom
cmake_minimum_required(VERSION 3.16)
project(geom)

include_directories(${PROJECT_SOURCE_DIR}/util/include)
include_directories(${PROJECT_SOURCE_DIR}/geometry2d/include)
include(CTest)
enable_testing()

add_subdirectory(geometry2d)
add_subdirectory(util)
add_subdirectory(geometry2d/include)
add_subdirectory(geometry2d/src)
add_subdirectory(Ctest)


add_executable(geom main.cpp)
target_link_libraries(geom geometry2d util)

#compare_test


# LMT_SEL_BEGIN
add_test(NAME CompareFuzzyTest COMMAND compare_test)
if(CODE_COVERAGE)
  target_code_coverage(compare_test AUTO ALL)
endif()
# LMT_SEL_END

#pose_test

# LMT_SEL_BEGIN
add_test(NAME PoseTest COMMAND pose_test)
if(CODE_COVERAGE)
  target_code_coverage(pose_test AUTO ALL)
endif()
# LMT_SEL_END

#point_test

# LMT_SEL_BEGIN
add_test(NAME PointTest COMMAND point_test)
if(CODE_COVERAGE)
  target_code_coverage(point_test AUTO ALL)
endif()
# LMT_SEL_END

#geo_compare_test

# LMT_SEL_BEGIN
add_test(NAME Geo_compareTest COMMAND geo_compare_test)
if(CODE_COVERAGE)
  target_code_coverage(geo_compare_test AUTO ALL)
endif()
# LMT_SEL_END


#line_test

# LMT_SEL_BEGIN
add_test(NAME LineTest COMMAND line_test)
if(CODE_COVERAGE)
  target_code_coverage(line_test AUTO ALL)
endif()
# LMT_SEL_END

#angle_test

# LMT_SEL_BEGIN
add_test(NAME AngleTest COMMAND angle_test)
if(CODE_COVERAGE)
  target_code_coverage(angle_test AUTO ALL)
endif()
# LMT_SEL_END




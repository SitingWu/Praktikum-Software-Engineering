#geom
cmake_minimum_required(VERSION 3.16)
project(geom)
aux_source_directory(. DIR_SRCS)
include_directories(${PROJECT_SOURCE_DIR}/util/include)
include_directories(${PROJECT_SOURCE_DIR}/geometry2d/include)
add_subdirectory(geometry2d)
add_subdirectory(util)
add_subdirectory(geometry2d/include)



add_executable(geom main.cpp)


target_link_libraries(geom geometry2d util)


add_executable(compare_test ${PROJECT_SOURCE_DIR}/util/src/compare_test.cpp)
target_link_libraries(compare_test util)

# LMT_SEL_BEGIN
add_test(NAME CompareFuzzyTest COMMAND compare_test)
if(CODE_COVERAGE)
  target_code_coverage(compare_test AUTO ALL)
endif()
# LMT_SEL_END



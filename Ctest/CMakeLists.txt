#geometry2d_test
include_directories(${PROJECT_SOURCE_DIR}/util/include)
include_directories(${PROJECT_SOURCE_DIR}/geometry2d/include)
include_directories(${PROJECT_SOURCE_DIR}/geometry2d/src)

#compare_test
add_executable(compare_google_test ${PROJECT_SOURCE_DIR}/Ctest/compare_test.cpp)
target_link_libraries(compare_google_test PRIVATE gtest_main util)
gtest_discover_tests(compare_google_test)
#pose_test
add_executable(pose_google_test ${PROJECT_SOURCE_DIR}/Ctest/pose_test.cpp)
target_link_libraries(pose_google_test PRIVATE gtest_main geometry2d util )
target_include_directories(pose_google_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)
gtest_discover_tests(pose_google_test)

add_executable(point_google_test ${PROJECT_SOURCE_DIR}/Ctest/point_test.cpp)
target_link_libraries(point_google_test PRIVATE gtest_main geometry2d util)
target_include_directories(pose_google_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)
gtest_discover_tests(point_google_test)

add_executable(geo_compare_test ${PROJECT_SOURCE_DIR}/Ctest/geo_compare_test.cpp)
target_link_libraries(geo_compare_test geometry2d util)
target_include_directories(geo_compare_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)

add_executable(line_test ${PROJECT_SOURCE_DIR}/Ctest/line_test.cpp)
target_link_libraries(line_test geometry2d util)
target_include_directories(line_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)

add_executable(angle_test ${PROJECT_SOURCE_DIR}/Ctest/angle_test.cpp)
target_link_libraries(angle_test geometry2d util)
target_include_directories(angle_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)
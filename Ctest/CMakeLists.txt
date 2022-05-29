#geometry2d_test
include_directories(${PROJECT_SOURCE_DIR}/util/include)
include_directories(${PROJECT_SOURCE_DIR}/geometry2d/include)
include_directories(${PROJECT_SOURCE_DIR}/geometry2d/src)

#compare_test
add_executable(compare_test ${PROJECT_SOURCE_DIR}/Ctest/compare_test.cpp)
target_link_libraries(compare_test util)


add_executable(pose_test ${PROJECT_SOURCE_DIR}/Ctest/pose_test.cpp)
target_link_libraries(pose_test geometry2d util )
target_include_directories(pose_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)

add_executable(point_test ${PROJECT_SOURCE_DIR}/Ctest/point_test.cpp)
target_link_libraries(point_test geometry2d util)
target_include_directories(pose_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)

add_executable(geo_compare_test ${PROJECT_SOURCE_DIR}/Ctest/geo_compare_test.cpp)
target_link_libraries(geo_compare_test geometry2d util)
target_include_directories(geo_compare_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)

add_executable(line_test ${PROJECT_SOURCE_DIR}/Ctest/line_test.cpp)
target_link_libraries(line_test geometry2d util)
target_include_directories(line_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)

add_executable(angle_test ${PROJECT_SOURCE_DIR}/Ctest/angle_test.cpp)
target_link_libraries(angle_test geometry2d util)
target_include_directories(angle_test PUBLIC ${PROJECT_SOURCE_DIR}/geometry2d/include)
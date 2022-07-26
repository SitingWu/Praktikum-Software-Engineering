#geometry2d
include_directories(${PROJECT_SOURCE_DIR}/geometry2d/include/)
set(SRC_LIST  ${PROJECT_SOURCE_DIR}/geometry2d/src/pose.cpp 
              ${PROJECT_SOURCE_DIR}/geometry2d/src/point.cpp 
              ${PROJECT_SOURCE_DIR}/geometry2d/src/angle.cpp 
              ${PROJECT_SOURCE_DIR}/geometry2d/src/geo_compare.cpp
              ${PROJECT_SOURCE_DIR}/geometry2d/src/line.cpp
              ${PROJECT_SOURCE_DIR}/geometry2d/src/circle.cpp  
    )

add_library(geometry2d ${SRC_LIST})

target_link_libraries(geometry2d util)

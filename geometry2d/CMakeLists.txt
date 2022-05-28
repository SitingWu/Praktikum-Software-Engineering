#geometry2d
include_directories(${PROJECT_SOURCE_DIR}/geometry2d/include)
set(SRC_LIST ${PROJECT_SOURCE_DIR}/geometry2d/src)


add_library(geometry2d ${SRC_LIST})

target_link_libraries(geometry2d util)

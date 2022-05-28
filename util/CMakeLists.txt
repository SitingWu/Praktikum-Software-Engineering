#util
include_directories(${PROJECT_SOURCE_DIR}/util/include)
set(UTIL_src ${PROJECT_SOURCE_DIR}/util/src/compare.cpp)

add_library(util ${UTIL_src})


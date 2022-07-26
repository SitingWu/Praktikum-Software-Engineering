option(ENABLE_CLANG_TIDY "Search for clang-tidy and enable if available" ON)

if(ENABLE_CLANG_TIDY)
  find_program(CLANG_TIDY NAMES "clang-tidy")
  if(CLANG_TIDY)
    set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY}")
  else()
    message(STATUS "Couldn't find clang-tidy")
  endif()
endif()

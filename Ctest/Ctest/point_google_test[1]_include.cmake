if(EXISTS "/home/nmermigas/sel-homework_14/Ctest/Ctest/point_google_test[1]_tests.cmake")
  include("/home/nmermigas/sel-homework_14/Ctest/Ctest/point_google_test[1]_tests.cmake")
else()
  add_test(point_google_test_NOT_BUILT point_google_test_NOT_BUILT)
endif()

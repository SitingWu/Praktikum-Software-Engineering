if(EXISTS "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/compare_test[1]_tests.cmake")
  include("/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/compare_test[1]_tests.cmake")
else()
  add_test(compare_test_NOT_BUILT compare_test_NOT_BUILT)
endif()
if(EXISTS "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/pose_google_test[1]_tests.cmake")
  include("/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/pose_google_test[1]_tests.cmake")
else()
  add_test(pose_google_test_NOT_BUILT pose_google_test_NOT_BUILT)
endif()

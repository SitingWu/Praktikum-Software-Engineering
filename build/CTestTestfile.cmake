# CMake generated Testfile for 
# Source directory: /home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14
# Build directory: /home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(CompareFuzzyTest "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/compare_test")
set_tests_properties(CompareFuzzyTest PROPERTIES  _BACKTRACE_TRIPLES "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;24;add_test;/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(PoseTest "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/pose_test")
set_tests_properties(PoseTest PROPERTIES  _BACKTRACE_TRIPLES "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;33;add_test;/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(PointTest "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/point_test")
set_tests_properties(PointTest PROPERTIES  _BACKTRACE_TRIPLES "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;42;add_test;/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(Geo_compareTest "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/geo_compare_test")
set_tests_properties(Geo_compareTest PROPERTIES  _BACKTRACE_TRIPLES "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;51;add_test;/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(LineTest "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/line_test")
set_tests_properties(LineTest PROPERTIES  _BACKTRACE_TRIPLES "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;61;add_test;/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(AngleTest "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/angle_test")
set_tests_properties(AngleTest PROPERTIES  _BACKTRACE_TRIPLES "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;70;add_test;/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
subdirs("geometry2d")
subdirs("util")
subdirs("geometry2d/include")
subdirs("geometry2d/src")
subdirs("Ctest")
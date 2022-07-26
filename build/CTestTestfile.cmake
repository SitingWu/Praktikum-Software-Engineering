# CMake generated Testfile for 
<<<<<<< HEAD
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
=======
# Source directory: /home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14
# Build directory: /home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(CompareFuzzyTest "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/compare_test")
set_tests_properties(CompareFuzzyTest PROPERTIES  _BACKTRACE_TRIPLES "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;47;add_test;/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(PoseTest "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/pose_test")
set_tests_properties(PoseTest PROPERTIES  _BACKTRACE_TRIPLES "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;56;add_test;/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(PointTest "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/point_test")
set_tests_properties(PointTest PROPERTIES  _BACKTRACE_TRIPLES "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;65;add_test;/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(CirleTest "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/circle_test")
set_tests_properties(CirleTest PROPERTIES  _BACKTRACE_TRIPLES "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;73;add_test;/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(LineTest "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/line_test")
set_tests_properties(LineTest PROPERTIES  _BACKTRACE_TRIPLES "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;82;add_test;/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(AngleTest "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/angle_test")
set_tests_properties(AngleTest PROPERTIES  _BACKTRACE_TRIPLES "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;90;add_test;/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
add_test(GeoCompareTest "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/geo_compare_test")
set_tests_properties(GeoCompareTest PROPERTIES  _BACKTRACE_TRIPLES "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;98;add_test;/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
>>>>>>> google_test
subdirs("geometry2d")
subdirs("util")
subdirs("geometry2d/include")
subdirs("geometry2d/src")
subdirs("Ctest")

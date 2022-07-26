# CMake generated Testfile for 
# Source directory: /home/nmermigas/sel-homework_14
# Build directory: /home/nmermigas/sel-homework_14/Ctest
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(CompareFuzzyTest "compare_test")
set_tests_properties(CompareFuzzyTest PROPERTIES  _BACKTRACE_TRIPLES "/home/nmermigas/sel-homework_14/CMakeLists.txt;37;add_test;/home/nmermigas/sel-homework_14/CMakeLists.txt;0;")
add_test(PoseTest "pose_test")
set_tests_properties(PoseTest PROPERTIES  _BACKTRACE_TRIPLES "/home/nmermigas/sel-homework_14/CMakeLists.txt;46;add_test;/home/nmermigas/sel-homework_14/CMakeLists.txt;0;")
add_test(PointTest "point_test")
set_tests_properties(PointTest PROPERTIES  _BACKTRACE_TRIPLES "/home/nmermigas/sel-homework_14/CMakeLists.txt;55;add_test;/home/nmermigas/sel-homework_14/CMakeLists.txt;0;")
add_test(Geo_compareTest "/home/nmermigas/sel-homework_14/Ctest/Ctest/geo_compare_test")
set_tests_properties(Geo_compareTest PROPERTIES  _BACKTRACE_TRIPLES "/home/nmermigas/sel-homework_14/CMakeLists.txt;64;add_test;/home/nmermigas/sel-homework_14/CMakeLists.txt;0;")
add_test(LineTest "/home/nmermigas/sel-homework_14/Ctest/Ctest/line_test")
set_tests_properties(LineTest PROPERTIES  _BACKTRACE_TRIPLES "/home/nmermigas/sel-homework_14/CMakeLists.txt;74;add_test;/home/nmermigas/sel-homework_14/CMakeLists.txt;0;")
add_test(AngleTest "/home/nmermigas/sel-homework_14/Ctest/Ctest/angle_test")
set_tests_properties(AngleTest PROPERTIES  _BACKTRACE_TRIPLES "/home/nmermigas/sel-homework_14/CMakeLists.txt;83;add_test;/home/nmermigas/sel-homework_14/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
subdirs("geometry2d")
subdirs("util")
subdirs("geometry2d/include")
subdirs("geometry2d/src")
subdirs("Ctest")

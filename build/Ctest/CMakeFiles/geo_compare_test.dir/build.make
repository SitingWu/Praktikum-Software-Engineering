# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
<<<<<<< HEAD
CMAKE_SOURCE_DIR = "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build"
=======
CMAKE_SOURCE_DIR = "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build"
>>>>>>> google_test

# Include any dependencies generated for this target.
include Ctest/CMakeFiles/geo_compare_test.dir/depend.make

# Include the progress variables for this target.
include Ctest/CMakeFiles/geo_compare_test.dir/progress.make

# Include the compile flags for this target's objects.
include Ctest/CMakeFiles/geo_compare_test.dir/flags.make

Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o: Ctest/CMakeFiles/geo_compare_test.dir/flags.make
Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o: ../Ctest/geo_compare_test.cpp
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o"
	cd "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o -c "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/Ctest/geo_compare_test.cpp"

Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.i"
	cd "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/Ctest/geo_compare_test.cpp" > CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.i

Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.s"
	cd "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/Ctest/geo_compare_test.cpp" -o CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o"
	cd "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && $(CMAKE_COMMAND) -E __run_co_compile --tidy=/usr/bin/clang-tidy --source="/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/Ctest/geo_compare_test.cpp" -- /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o -c "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/Ctest/geo_compare_test.cpp"

Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.i"
	cd "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/Ctest/geo_compare_test.cpp" > CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.i

Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.s"
	cd "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/Ctest/geo_compare_test.cpp" -o CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.s
>>>>>>> google_test

# Object files for target geo_compare_test
geo_compare_test_OBJECTS = \
"CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o"

# External object files for target geo_compare_test
geo_compare_test_EXTERNAL_OBJECTS =

Ctest/geo_compare_test: Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o
Ctest/geo_compare_test: Ctest/CMakeFiles/geo_compare_test.dir/build.make
<<<<<<< HEAD
Ctest/geo_compare_test: geometry2d/libgeometry2d.a
Ctest/geo_compare_test: util/libutil.a
Ctest/geo_compare_test: Ctest/CMakeFiles/geo_compare_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable geo_compare_test"
	cd "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geo_compare_test.dir/link.txt --verbose=$(VERBOSE)
=======
Ctest/geo_compare_test: lib/libgtest_main.a
Ctest/geo_compare_test: geometry2d/libgeometry2d.a
Ctest/geo_compare_test: util/libutil.a
Ctest/geo_compare_test: lib/libgtest.a
Ctest/geo_compare_test: Ctest/CMakeFiles/geo_compare_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable geo_compare_test"
	cd "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geo_compare_test.dir/link.txt --verbose=$(VERBOSE)
	cd "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && /usr/bin/cmake -D TEST_TARGET=geo_compare_test -D "TEST_EXECUTABLE=/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/geo_compare_test" -D TEST_EXECUTOR= -D "TEST_WORKING_DIR=/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=geo_compare_test_TESTS -D "CTEST_FILE=/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/geo_compare_test[1]_tests.cmake" -D TEST_DISCOVERY_TIMEOUT=5 -P /usr/share/cmake-3.16/Modules/GoogleTestAddTests.cmake
>>>>>>> google_test

# Rule to build all files generated by this target.
Ctest/CMakeFiles/geo_compare_test.dir/build: Ctest/geo_compare_test

.PHONY : Ctest/CMakeFiles/geo_compare_test.dir/build

Ctest/CMakeFiles/geo_compare_test.dir/clean:
<<<<<<< HEAD
	cd "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && $(CMAKE_COMMAND) -P CMakeFiles/geo_compare_test.dir/cmake_clean.cmake
.PHONY : Ctest/CMakeFiles/geo_compare_test.dir/clean

Ctest/CMakeFiles/geo_compare_test.dir/depend:
	cd "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/Ctest" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/CMakeFiles/geo_compare_test.dir/DependInfo.cmake" --color=$(COLOR)
=======
	cd "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" && $(CMAKE_COMMAND) -P CMakeFiles/geo_compare_test.dir/cmake_clean.cmake
.PHONY : Ctest/CMakeFiles/geo_compare_test.dir/clean

Ctest/CMakeFiles/geo_compare_test.dir/depend:
	cd "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14" "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/Ctest" "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build" "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest" "/home/benutzer/Dokumente/Praktikum Software Engineering/sel-homework_14/build/Ctest/CMakeFiles/geo_compare_test.dir/DependInfo.cmake" --color=$(COLOR)
>>>>>>> google_test
.PHONY : Ctest/CMakeFiles/geo_compare_test.dir/depend


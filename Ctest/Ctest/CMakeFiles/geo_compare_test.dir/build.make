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
CMAKE_SOURCE_DIR = /home/nmermigas/sel-homework_14

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nmermigas/sel-homework_14/Ctest

# Include any dependencies generated for this target.
include Ctest/CMakeFiles/geo_compare_test.dir/depend.make

# Include the progress variables for this target.
include Ctest/CMakeFiles/geo_compare_test.dir/progress.make

# Include the compile flags for this target's objects.
include Ctest/CMakeFiles/geo_compare_test.dir/flags.make

Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o: Ctest/CMakeFiles/geo_compare_test.dir/flags.make
Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o: geo_compare_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nmermigas/sel-homework_14/Ctest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o"
	cd /home/nmermigas/sel-homework_14/Ctest/Ctest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o -c /home/nmermigas/sel-homework_14/Ctest/geo_compare_test.cpp

Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.i"
	cd /home/nmermigas/sel-homework_14/Ctest/Ctest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nmermigas/sel-homework_14/Ctest/geo_compare_test.cpp > CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.i

Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.s"
	cd /home/nmermigas/sel-homework_14/Ctest/Ctest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nmermigas/sel-homework_14/Ctest/geo_compare_test.cpp -o CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.s

# Object files for target geo_compare_test
geo_compare_test_OBJECTS = \
"CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o"

# External object files for target geo_compare_test
geo_compare_test_EXTERNAL_OBJECTS =

Ctest/geo_compare_test: Ctest/CMakeFiles/geo_compare_test.dir/geo_compare_test.cpp.o
Ctest/geo_compare_test: Ctest/CMakeFiles/geo_compare_test.dir/build.make
Ctest/geo_compare_test: geometry2d/libgeometry2d.a
Ctest/geo_compare_test: util/libutil.a
Ctest/geo_compare_test: Ctest/CMakeFiles/geo_compare_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nmermigas/sel-homework_14/Ctest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable geo_compare_test"
	cd /home/nmermigas/sel-homework_14/Ctest/Ctest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geo_compare_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Ctest/CMakeFiles/geo_compare_test.dir/build: Ctest/geo_compare_test

.PHONY : Ctest/CMakeFiles/geo_compare_test.dir/build

Ctest/CMakeFiles/geo_compare_test.dir/clean:
	cd /home/nmermigas/sel-homework_14/Ctest/Ctest && $(CMAKE_COMMAND) -P CMakeFiles/geo_compare_test.dir/cmake_clean.cmake
.PHONY : Ctest/CMakeFiles/geo_compare_test.dir/clean

Ctest/CMakeFiles/geo_compare_test.dir/depend:
	cd /home/nmermigas/sel-homework_14/Ctest && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nmermigas/sel-homework_14 /home/nmermigas/sel-homework_14/Ctest /home/nmermigas/sel-homework_14/Ctest /home/nmermigas/sel-homework_14/Ctest/Ctest /home/nmermigas/sel-homework_14/Ctest/Ctest/CMakeFiles/geo_compare_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Ctest/CMakeFiles/geo_compare_test.dir/depend


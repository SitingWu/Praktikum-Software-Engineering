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
CMAKE_SOURCE_DIR = "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build"

# Include any dependencies generated for this target.
include CMakeFiles/geom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/geom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/geom.dir/flags.make

CMakeFiles/geom.dir/main.cpp.o: CMakeFiles/geom.dir/flags.make
CMakeFiles/geom.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/geom.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geom.dir/main.cpp.o -c "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/main.cpp"

CMakeFiles/geom.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geom.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/main.cpp" > CMakeFiles/geom.dir/main.cpp.i

CMakeFiles/geom.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geom.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/main.cpp" -o CMakeFiles/geom.dir/main.cpp.s

# Object files for target geom
geom_OBJECTS = \
"CMakeFiles/geom.dir/main.cpp.o"

# External object files for target geom
geom_EXTERNAL_OBJECTS =

geom: CMakeFiles/geom.dir/main.cpp.o
geom: CMakeFiles/geom.dir/build.make
geom: geometry2d/libgeometry2d.a
geom: util/libutil.a
geom: CMakeFiles/geom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable geom"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/geom.dir/build: geom

.PHONY : CMakeFiles/geom.dir/build

CMakeFiles/geom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/geom.dir/cmake_clean.cmake
.PHONY : CMakeFiles/geom.dir/clean

CMakeFiles/geom.dir/depend:
	cd "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build" "/home/rose0901/Dokumente/Praktikum Software Engineering/sel-homework_14/build/CMakeFiles/geom.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/geom.dir/depend


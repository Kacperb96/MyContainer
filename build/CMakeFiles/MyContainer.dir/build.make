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
CMAKE_SOURCE_DIR = /home/kacper/Pulpit/MyContainer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kacper/Pulpit/MyContainer/build

# Include any dependencies generated for this target.
include CMakeFiles/MyContainer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyContainer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyContainer.dir/flags.make

CMakeFiles/MyContainer.dir/MyContainer.cpp.o: CMakeFiles/MyContainer.dir/flags.make
CMakeFiles/MyContainer.dir/MyContainer.cpp.o: ../MyContainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kacper/Pulpit/MyContainer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyContainer.dir/MyContainer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyContainer.dir/MyContainer.cpp.o -c /home/kacper/Pulpit/MyContainer/MyContainer.cpp

CMakeFiles/MyContainer.dir/MyContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyContainer.dir/MyContainer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kacper/Pulpit/MyContainer/MyContainer.cpp > CMakeFiles/MyContainer.dir/MyContainer.cpp.i

CMakeFiles/MyContainer.dir/MyContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyContainer.dir/MyContainer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kacper/Pulpit/MyContainer/MyContainer.cpp -o CMakeFiles/MyContainer.dir/MyContainer.cpp.s

# Object files for target MyContainer
MyContainer_OBJECTS = \
"CMakeFiles/MyContainer.dir/MyContainer.cpp.o"

# External object files for target MyContainer
MyContainer_EXTERNAL_OBJECTS =

libMyContainer.a: CMakeFiles/MyContainer.dir/MyContainer.cpp.o
libMyContainer.a: CMakeFiles/MyContainer.dir/build.make
libMyContainer.a: CMakeFiles/MyContainer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kacper/Pulpit/MyContainer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMyContainer.a"
	$(CMAKE_COMMAND) -P CMakeFiles/MyContainer.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyContainer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyContainer.dir/build: libMyContainer.a

.PHONY : CMakeFiles/MyContainer.dir/build

CMakeFiles/MyContainer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyContainer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyContainer.dir/clean

CMakeFiles/MyContainer.dir/depend:
	cd /home/kacper/Pulpit/MyContainer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kacper/Pulpit/MyContainer /home/kacper/Pulpit/MyContainer /home/kacper/Pulpit/MyContainer/build /home/kacper/Pulpit/MyContainer/build /home/kacper/Pulpit/MyContainer/build/CMakeFiles/MyContainer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyContainer.dir/depend


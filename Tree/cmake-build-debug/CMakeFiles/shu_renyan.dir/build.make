# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/yexm/Downloads/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yexm/Downloads/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yexm/Documents/Tree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yexm/Documents/Tree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/shu_renyan.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/shu_renyan.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shu_renyan.dir/flags.make

CMakeFiles/shu_renyan.dir/main.cpp.o: CMakeFiles/shu_renyan.dir/flags.make
CMakeFiles/shu_renyan.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yexm/Documents/Tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/shu_renyan.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shu_renyan.dir/main.cpp.o -c /home/yexm/Documents/Tree/main.cpp

CMakeFiles/shu_renyan.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shu_renyan.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yexm/Documents/Tree/main.cpp > CMakeFiles/shu_renyan.dir/main.cpp.i

CMakeFiles/shu_renyan.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shu_renyan.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yexm/Documents/Tree/main.cpp -o CMakeFiles/shu_renyan.dir/main.cpp.s

# Object files for target shu_renyan
shu_renyan_OBJECTS = \
"CMakeFiles/shu_renyan.dir/main.cpp.o"

# External object files for target shu_renyan
shu_renyan_EXTERNAL_OBJECTS =

shu_renyan: CMakeFiles/shu_renyan.dir/main.cpp.o
shu_renyan: CMakeFiles/shu_renyan.dir/build.make
shu_renyan: CMakeFiles/shu_renyan.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yexm/Documents/Tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable shu_renyan"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shu_renyan.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shu_renyan.dir/build: shu_renyan

.PHONY : CMakeFiles/shu_renyan.dir/build

CMakeFiles/shu_renyan.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shu_renyan.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shu_renyan.dir/clean

CMakeFiles/shu_renyan.dir/depend:
	cd /home/yexm/Documents/Tree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yexm/Documents/Tree /home/yexm/Documents/Tree /home/yexm/Documents/Tree/cmake-build-debug /home/yexm/Documents/Tree/cmake-build-debug /home/yexm/Documents/Tree/cmake-build-debug/CMakeFiles/shu_renyan.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/shu_renyan.dir/depend

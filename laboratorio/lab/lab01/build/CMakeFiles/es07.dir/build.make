# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/haida/Notes/uni/laboratorio/lab01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/haida/Notes/uni/laboratorio/lab01/build

# Include any dependencies generated for this target.
include CMakeFiles/es07.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/es07.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/es07.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/es07.dir/flags.make

CMakeFiles/es07.dir/es07.o: CMakeFiles/es07.dir/flags.make
CMakeFiles/es07.dir/es07.o: /home/haida/Notes/uni/laboratorio/lab01/es07.cpp
CMakeFiles/es07.dir/es07.o: CMakeFiles/es07.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/haida/Notes/uni/laboratorio/lab01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/es07.dir/es07.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/es07.dir/es07.o -MF CMakeFiles/es07.dir/es07.o.d -o CMakeFiles/es07.dir/es07.o -c /home/haida/Notes/uni/laboratorio/lab01/es07.cpp

CMakeFiles/es07.dir/es07.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/es07.dir/es07.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haida/Notes/uni/laboratorio/lab01/es07.cpp > CMakeFiles/es07.dir/es07.i

CMakeFiles/es07.dir/es07.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/es07.dir/es07.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haida/Notes/uni/laboratorio/lab01/es07.cpp -o CMakeFiles/es07.dir/es07.s

# Object files for target es07
es07_OBJECTS = \
"CMakeFiles/es07.dir/es07.o"

# External object files for target es07
es07_EXTERNAL_OBJECTS =

es07: CMakeFiles/es07.dir/es07.o
es07: CMakeFiles/es07.dir/build.make
es07: CMakeFiles/es07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/haida/Notes/uni/laboratorio/lab01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable es07"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/es07.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/es07.dir/build: es07
.PHONY : CMakeFiles/es07.dir/build

CMakeFiles/es07.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/es07.dir/cmake_clean.cmake
.PHONY : CMakeFiles/es07.dir/clean

CMakeFiles/es07.dir/depend:
	cd /home/haida/Notes/uni/laboratorio/lab01/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/haida/Notes/uni/laboratorio/lab01 /home/haida/Notes/uni/laboratorio/lab01 /home/haida/Notes/uni/laboratorio/lab01/build /home/haida/Notes/uni/laboratorio/lab01/build /home/haida/Notes/uni/laboratorio/lab01/build/CMakeFiles/es07.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/es07.dir/depend

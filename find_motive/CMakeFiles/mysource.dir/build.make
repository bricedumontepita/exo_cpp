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
CMAKE_SOURCE_DIR = /home/bricedumont/epita_depots/exo_cpp/find_motive

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bricedumont/epita_depots/exo_cpp/find_motive

# Include any dependencies generated for this target.
include CMakeFiles/mysource.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mysource.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mysource.dir/flags.make

CMakeFiles/mysource.dir/sources.cpp.o: CMakeFiles/mysource.dir/flags.make
CMakeFiles/mysource.dir/sources.cpp.o: sources.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bricedumont/epita_depots/exo_cpp/find_motive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mysource.dir/sources.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mysource.dir/sources.cpp.o -c /home/bricedumont/epita_depots/exo_cpp/find_motive/sources.cpp

CMakeFiles/mysource.dir/sources.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mysource.dir/sources.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bricedumont/epita_depots/exo_cpp/find_motive/sources.cpp > CMakeFiles/mysource.dir/sources.cpp.i

CMakeFiles/mysource.dir/sources.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mysource.dir/sources.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bricedumont/epita_depots/exo_cpp/find_motive/sources.cpp -o CMakeFiles/mysource.dir/sources.cpp.s

# Object files for target mysource
mysource_OBJECTS = \
"CMakeFiles/mysource.dir/sources.cpp.o"

# External object files for target mysource
mysource_EXTERNAL_OBJECTS =

libmysource.so: CMakeFiles/mysource.dir/sources.cpp.o
libmysource.so: CMakeFiles/mysource.dir/build.make
libmysource.so: CMakeFiles/mysource.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bricedumont/epita_depots/exo_cpp/find_motive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libmysource.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mysource.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mysource.dir/build: libmysource.so

.PHONY : CMakeFiles/mysource.dir/build

CMakeFiles/mysource.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mysource.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mysource.dir/clean

CMakeFiles/mysource.dir/depend:
	cd /home/bricedumont/epita_depots/exo_cpp/find_motive && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bricedumont/epita_depots/exo_cpp/find_motive /home/bricedumont/epita_depots/exo_cpp/find_motive /home/bricedumont/epita_depots/exo_cpp/find_motive /home/bricedumont/epita_depots/exo_cpp/find_motive /home/bricedumont/epita_depots/exo_cpp/find_motive/CMakeFiles/mysource.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mysource.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/momo/Desktop/CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/momo/Desktop/CPP/build

# Include any dependencies generated for this target.
include CMakeFiles/Raw.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Raw.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Raw.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Raw.dir/flags.make

CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.o: CMakeFiles/Raw.dir/flags.make
CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.o: /Users/momo/Desktop/CPP/Chapter4/Source/原生字符串.cpp
CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.o: CMakeFiles/Raw.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/momo/Desktop/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.o -MF CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.o.d -o CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.o -c /Users/momo/Desktop/CPP/Chapter4/Source/原生字符串.cpp

CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/momo/Desktop/CPP/Chapter4/Source/原生字符串.cpp > CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.i

CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/momo/Desktop/CPP/Chapter4/Source/原生字符串.cpp -o CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.s

# Object files for target Raw
Raw_OBJECTS = \
"CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.o"

# External object files for target Raw
Raw_EXTERNAL_OBJECTS =

Raw: CMakeFiles/Raw.dir/Chapter4/Source/原生字符串.cpp.o
Raw: CMakeFiles/Raw.dir/build.make
Raw: CMakeFiles/Raw.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/momo/Desktop/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Raw"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Raw.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Raw.dir/build: Raw
.PHONY : CMakeFiles/Raw.dir/build

CMakeFiles/Raw.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Raw.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Raw.dir/clean

CMakeFiles/Raw.dir/depend:
	cd /Users/momo/Desktop/CPP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/momo/Desktop/CPP /Users/momo/Desktop/CPP /Users/momo/Desktop/CPP/build /Users/momo/Desktop/CPP/build /Users/momo/Desktop/CPP/build/CMakeFiles/Raw.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Raw.dir/depend


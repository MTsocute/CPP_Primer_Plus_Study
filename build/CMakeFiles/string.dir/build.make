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
include CMakeFiles/string.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/string.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/string.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/string.dir/flags.make

CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.o: CMakeFiles/string.dir/flags.make
CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.o: /Users/momo/Desktop/CPP/Chapter4/Source/string的使用.cpp
CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.o: CMakeFiles/string.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/momo/Desktop/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.o -MF CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.o.d -o CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.o -c /Users/momo/Desktop/CPP/Chapter4/Source/string的使用.cpp

CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/momo/Desktop/CPP/Chapter4/Source/string的使用.cpp > CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.i

CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/momo/Desktop/CPP/Chapter4/Source/string的使用.cpp -o CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.s

# Object files for target string
string_OBJECTS = \
"CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.o"

# External object files for target string
string_EXTERNAL_OBJECTS =

string: CMakeFiles/string.dir/Chapter4/Source/string的使用.cpp.o
string: CMakeFiles/string.dir/build.make
string: CMakeFiles/string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/momo/Desktop/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable string"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/string.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/string.dir/build: string
.PHONY : CMakeFiles/string.dir/build

CMakeFiles/string.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/string.dir/cmake_clean.cmake
.PHONY : CMakeFiles/string.dir/clean

CMakeFiles/string.dir/depend:
	cd /Users/momo/Desktop/CPP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/momo/Desktop/CPP /Users/momo/Desktop/CPP /Users/momo/Desktop/CPP/build /Users/momo/Desktop/CPP/build /Users/momo/Desktop/CPP/build/CMakeFiles/string.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/string.dir/depend


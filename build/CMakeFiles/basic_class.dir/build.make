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
include CMakeFiles/basic_class.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/basic_class.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/basic_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/basic_class.dir/flags.make

CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.o: CMakeFiles/basic_class.dir/flags.make
CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.o: /Users/momo/Desktop/CPP/Chapter13/一个简单基类的使用.cpp
CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.o: CMakeFiles/basic_class.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/momo/Desktop/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.o -MF CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.o.d -o CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.o -c /Users/momo/Desktop/CPP/Chapter13/一个简单基类的使用.cpp

CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/momo/Desktop/CPP/Chapter13/一个简单基类的使用.cpp > CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.i

CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/momo/Desktop/CPP/Chapter13/一个简单基类的使用.cpp -o CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.s

CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.o: CMakeFiles/basic_class.dir/flags.make
CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.o: /Users/momo/Desktop/CPP/Chapter13/一个简单的基类.cpp
CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.o: CMakeFiles/basic_class.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/momo/Desktop/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.o -MF CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.o.d -o CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.o -c /Users/momo/Desktop/CPP/Chapter13/一个简单的基类.cpp

CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/momo/Desktop/CPP/Chapter13/一个简单的基类.cpp > CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.i

CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/momo/Desktop/CPP/Chapter13/一个简单的基类.cpp -o CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.s

# Object files for target basic_class
basic_class_OBJECTS = \
"CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.o" \
"CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.o"

# External object files for target basic_class
basic_class_EXTERNAL_OBJECTS =

basic_class: CMakeFiles/basic_class.dir/Chapter13/一个简单基类的使用.cpp.o
basic_class: CMakeFiles/basic_class.dir/Chapter13/一个简单的基类.cpp.o
basic_class: CMakeFiles/basic_class.dir/build.make
basic_class: CMakeFiles/basic_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/momo/Desktop/CPP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable basic_class"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/basic_class.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/basic_class.dir/build: basic_class
.PHONY : CMakeFiles/basic_class.dir/build

CMakeFiles/basic_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/basic_class.dir/cmake_clean.cmake
.PHONY : CMakeFiles/basic_class.dir/clean

CMakeFiles/basic_class.dir/depend:
	cd /Users/momo/Desktop/CPP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/momo/Desktop/CPP /Users/momo/Desktop/CPP /Users/momo/Desktop/CPP/build /Users/momo/Desktop/CPP/build /Users/momo/Desktop/CPP/build/CMakeFiles/basic_class.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/basic_class.dir/depend


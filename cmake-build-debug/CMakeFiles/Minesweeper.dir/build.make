# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "/Users/marcfurup/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/213.7172.20/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/marcfurup/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/213.7172.20/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/marcfurup/Documents/EigeneProgramme/Minesweeper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Minesweeper.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Minesweeper.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Minesweeper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Minesweeper.dir/flags.make

CMakeFiles/Minesweeper.dir/main.cpp.o: CMakeFiles/Minesweeper.dir/flags.make
CMakeFiles/Minesweeper.dir/main.cpp.o: ../main.cpp
CMakeFiles/Minesweeper.dir/main.cpp.o: CMakeFiles/Minesweeper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Minesweeper.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Minesweeper.dir/main.cpp.o -MF CMakeFiles/Minesweeper.dir/main.cpp.o.d -o CMakeFiles/Minesweeper.dir/main.cpp.o -c /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/main.cpp

CMakeFiles/Minesweeper.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Minesweeper.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/main.cpp > CMakeFiles/Minesweeper.dir/main.cpp.i

CMakeFiles/Minesweeper.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Minesweeper.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/main.cpp -o CMakeFiles/Minesweeper.dir/main.cpp.s

CMakeFiles/Minesweeper.dir/Map.cpp.o: CMakeFiles/Minesweeper.dir/flags.make
CMakeFiles/Minesweeper.dir/Map.cpp.o: ../Map.cpp
CMakeFiles/Minesweeper.dir/Map.cpp.o: CMakeFiles/Minesweeper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Minesweeper.dir/Map.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Minesweeper.dir/Map.cpp.o -MF CMakeFiles/Minesweeper.dir/Map.cpp.o.d -o CMakeFiles/Minesweeper.dir/Map.cpp.o -c /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/Map.cpp

CMakeFiles/Minesweeper.dir/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Minesweeper.dir/Map.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/Map.cpp > CMakeFiles/Minesweeper.dir/Map.cpp.i

CMakeFiles/Minesweeper.dir/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Minesweeper.dir/Map.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/Map.cpp -o CMakeFiles/Minesweeper.dir/Map.cpp.s

CMakeFiles/Minesweeper.dir/Game.cpp.o: CMakeFiles/Minesweeper.dir/flags.make
CMakeFiles/Minesweeper.dir/Game.cpp.o: ../Game.cpp
CMakeFiles/Minesweeper.dir/Game.cpp.o: CMakeFiles/Minesweeper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Minesweeper.dir/Game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Minesweeper.dir/Game.cpp.o -MF CMakeFiles/Minesweeper.dir/Game.cpp.o.d -o CMakeFiles/Minesweeper.dir/Game.cpp.o -c /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/Game.cpp

CMakeFiles/Minesweeper.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Minesweeper.dir/Game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/Game.cpp > CMakeFiles/Minesweeper.dir/Game.cpp.i

CMakeFiles/Minesweeper.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Minesweeper.dir/Game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/Game.cpp -o CMakeFiles/Minesweeper.dir/Game.cpp.s

CMakeFiles/Minesweeper.dir/Field.cpp.o: CMakeFiles/Minesweeper.dir/flags.make
CMakeFiles/Minesweeper.dir/Field.cpp.o: ../Field.cpp
CMakeFiles/Minesweeper.dir/Field.cpp.o: CMakeFiles/Minesweeper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Minesweeper.dir/Field.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Minesweeper.dir/Field.cpp.o -MF CMakeFiles/Minesweeper.dir/Field.cpp.o.d -o CMakeFiles/Minesweeper.dir/Field.cpp.o -c /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/Field.cpp

CMakeFiles/Minesweeper.dir/Field.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Minesweeper.dir/Field.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/Field.cpp > CMakeFiles/Minesweeper.dir/Field.cpp.i

CMakeFiles/Minesweeper.dir/Field.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Minesweeper.dir/Field.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/Field.cpp -o CMakeFiles/Minesweeper.dir/Field.cpp.s

# Object files for target Minesweeper
Minesweeper_OBJECTS = \
"CMakeFiles/Minesweeper.dir/main.cpp.o" \
"CMakeFiles/Minesweeper.dir/Map.cpp.o" \
"CMakeFiles/Minesweeper.dir/Game.cpp.o" \
"CMakeFiles/Minesweeper.dir/Field.cpp.o"

# External object files for target Minesweeper
Minesweeper_EXTERNAL_OBJECTS =

Minesweeper: CMakeFiles/Minesweeper.dir/main.cpp.o
Minesweeper: CMakeFiles/Minesweeper.dir/Map.cpp.o
Minesweeper: CMakeFiles/Minesweeper.dir/Game.cpp.o
Minesweeper: CMakeFiles/Minesweeper.dir/Field.cpp.o
Minesweeper: CMakeFiles/Minesweeper.dir/build.make
Minesweeper: CMakeFiles/Minesweeper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Minesweeper"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Minesweeper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Minesweeper.dir/build: Minesweeper
.PHONY : CMakeFiles/Minesweeper.dir/build

CMakeFiles/Minesweeper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Minesweeper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Minesweeper.dir/clean

CMakeFiles/Minesweeper.dir/depend:
	cd /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marcfurup/Documents/EigeneProgramme/Minesweeper /Users/marcfurup/Documents/EigeneProgramme/Minesweeper /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug /Users/marcfurup/Documents/EigeneProgramme/Minesweeper/cmake-build-debug/CMakeFiles/Minesweeper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Minesweeper.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /home/mehdi/.local/lib/python2.7/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/mehdi/.local/lib/python2.7/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mehdi/Documents/MA3/Project_monte_carlo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mehdi/Documents/MA3/Project_monte_carlo/build

# Include any dependencies generated for this target.
include Test/CMakeFiles/RunAllTests.dir/depend.make

# Include the progress variables for this target.
include Test/CMakeFiles/RunAllTests.dir/progress.make

# Include the compile flags for this target's objects.
include Test/CMakeFiles/RunAllTests.dir/flags.make

Test/CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.o: Test/CMakeFiles/RunAllTests.dir/flags.make
Test/CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.o: ../Test/UniformDist_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mehdi/Documents/MA3/Project_monte_carlo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Test/CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.o"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.o -c /home/mehdi/Documents/MA3/Project_monte_carlo/Test/UniformDist_test.cpp

Test/CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.i"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mehdi/Documents/MA3/Project_monte_carlo/Test/UniformDist_test.cpp > CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.i

Test/CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.s"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mehdi/Documents/MA3/Project_monte_carlo/Test/UniformDist_test.cpp -o CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.s

Test/CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.o: Test/CMakeFiles/RunAllTests.dir/flags.make
Test/CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.o: ../Test/NormalDist_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mehdi/Documents/MA3/Project_monte_carlo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Test/CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.o"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.o -c /home/mehdi/Documents/MA3/Project_monte_carlo/Test/NormalDist_test.cpp

Test/CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.i"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mehdi/Documents/MA3/Project_monte_carlo/Test/NormalDist_test.cpp > CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.i

Test/CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.s"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mehdi/Documents/MA3/Project_monte_carlo/Test/NormalDist_test.cpp -o CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.s

Test/CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.o: Test/CMakeFiles/RunAllTests.dir/flags.make
Test/CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.o: ../Test/MonteCarloExpectation_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mehdi/Documents/MA3/Project_monte_carlo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Test/CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.o"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.o -c /home/mehdi/Documents/MA3/Project_monte_carlo/Test/MonteCarloExpectation_test.cpp

Test/CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.i"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mehdi/Documents/MA3/Project_monte_carlo/Test/MonteCarloExpectation_test.cpp > CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.i

Test/CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.s"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mehdi/Documents/MA3/Project_monte_carlo/Test/MonteCarloExpectation_test.cpp -o CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.s

Test/CMakeFiles/RunAllTests.dir/Reader_test.cpp.o: Test/CMakeFiles/RunAllTests.dir/flags.make
Test/CMakeFiles/RunAllTests.dir/Reader_test.cpp.o: ../Test/Reader_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mehdi/Documents/MA3/Project_monte_carlo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Test/CMakeFiles/RunAllTests.dir/Reader_test.cpp.o"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/Reader_test.cpp.o -c /home/mehdi/Documents/MA3/Project_monte_carlo/Test/Reader_test.cpp

Test/CMakeFiles/RunAllTests.dir/Reader_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/Reader_test.cpp.i"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mehdi/Documents/MA3/Project_monte_carlo/Test/Reader_test.cpp > CMakeFiles/RunAllTests.dir/Reader_test.cpp.i

Test/CMakeFiles/RunAllTests.dir/Reader_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/Reader_test.cpp.s"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mehdi/Documents/MA3/Project_monte_carlo/Test/Reader_test.cpp -o CMakeFiles/RunAllTests.dir/Reader_test.cpp.s

# Object files for target RunAllTests
RunAllTests_OBJECTS = \
"CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.o" \
"CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.o" \
"CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.o" \
"CMakeFiles/RunAllTests.dir/Reader_test.cpp.o"

# External object files for target RunAllTests
RunAllTests_EXTERNAL_OBJECTS =

Test/RunAllTests: Test/CMakeFiles/RunAllTests.dir/UniformDist_test.cpp.o
Test/RunAllTests: Test/CMakeFiles/RunAllTests.dir/NormalDist_test.cpp.o
Test/RunAllTests: Test/CMakeFiles/RunAllTests.dir/MonteCarloExpectation_test.cpp.o
Test/RunAllTests: Test/CMakeFiles/RunAllTests.dir/Reader_test.cpp.o
Test/RunAllTests: Test/CMakeFiles/RunAllTests.dir/build.make
Test/RunAllTests: lib/libgtest.a
Test/RunAllTests: lib/libgtest_main.a
Test/RunAllTests: Modules/libModules.a
Test/RunAllTests: lib/libgtest.a
Test/RunAllTests: Test/CMakeFiles/RunAllTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mehdi/Documents/MA3/Project_monte_carlo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable RunAllTests"
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RunAllTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Test/CMakeFiles/RunAllTests.dir/build: Test/RunAllTests

.PHONY : Test/CMakeFiles/RunAllTests.dir/build

Test/CMakeFiles/RunAllTests.dir/clean:
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test && $(CMAKE_COMMAND) -P CMakeFiles/RunAllTests.dir/cmake_clean.cmake
.PHONY : Test/CMakeFiles/RunAllTests.dir/clean

Test/CMakeFiles/RunAllTests.dir/depend:
	cd /home/mehdi/Documents/MA3/Project_monte_carlo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mehdi/Documents/MA3/Project_monte_carlo /home/mehdi/Documents/MA3/Project_monte_carlo/Test /home/mehdi/Documents/MA3/Project_monte_carlo/build /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test /home/mehdi/Documents/MA3/Project_monte_carlo/build/Test/CMakeFiles/RunAllTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Test/CMakeFiles/RunAllTests.dir/depend

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
CMAKE_COMMAND = /snap/clion/177/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/177/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ksenia/cringe/client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ksenia/cringe/client/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/client_target.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/client_target.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/client_target.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/client_target.dir/flags.make

CMakeFiles/client_target.dir/main.cpp.o: CMakeFiles/client_target.dir/flags.make
CMakeFiles/client_target.dir/main.cpp.o: ../main.cpp
CMakeFiles/client_target.dir/main.cpp.o: CMakeFiles/client_target.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ksenia/cringe/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/client_target.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client_target.dir/main.cpp.o -MF CMakeFiles/client_target.dir/main.cpp.o.d -o CMakeFiles/client_target.dir/main.cpp.o -c /home/ksenia/cringe/client/main.cpp

CMakeFiles/client_target.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client_target.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ksenia/cringe/client/main.cpp > CMakeFiles/client_target.dir/main.cpp.i

CMakeFiles/client_target.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client_target.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ksenia/cringe/client/main.cpp -o CMakeFiles/client_target.dir/main.cpp.s

# Object files for target client_target
client_target_OBJECTS = \
"CMakeFiles/client_target.dir/main.cpp.o"

# External object files for target client_target
client_target_EXTERNAL_OBJECTS =

client_target: CMakeFiles/client_target.dir/main.cpp.o
client_target: CMakeFiles/client_target.dir/build.make
client_target: graphics_lib/libgraphics_lib.a
client_target: client_lib/libclient_lib.so
client_target: /usr/lib/x86_64-linux-gnu/libboost_system.so
client_target: /usr/lib/x86_64-linux-gnu/libboost_log.so
client_target: /usr/lib/x86_64-linux-gnu/libboost_thread.so
client_target: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
client_target: /usr/lib/x86_64-linux-gnu/libboost_log_setup.so
client_target: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
client_target: /usr/lib/x86_64-linux-gnu/libboost_regex.so
client_target: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
client_target: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
client_target: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.9.5
client_target: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
client_target: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
client_target: CMakeFiles/client_target.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ksenia/cringe/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable client_target"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client_target.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/client_target.dir/build: client_target
.PHONY : CMakeFiles/client_target.dir/build

CMakeFiles/client_target.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/client_target.dir/cmake_clean.cmake
.PHONY : CMakeFiles/client_target.dir/clean

CMakeFiles/client_target.dir/depend:
	cd /home/ksenia/cringe/client/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ksenia/cringe/client /home/ksenia/cringe/client /home/ksenia/cringe/client/cmake-build-debug /home/ksenia/cringe/client/cmake-build-debug /home/ksenia/cringe/client/cmake-build-debug/CMakeFiles/client_target.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/client_target.dir/depend


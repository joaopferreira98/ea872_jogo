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
CMAKE_SOURCE_DIR = /home/pc/github/ea872_jogo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pc/github/ea872_jogo/bin

# Include any dependencies generated for this target.
include CMakeFiles/classes-sdl.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/classes-sdl.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/classes-sdl.dir/flags.make

CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.o: CMakeFiles/classes-sdl.dir/flags.make
CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.o: ../src/sdl-render.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pc/github/ea872_jogo/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.o -c /home/pc/github/ea872_jogo/src/sdl-render.cpp

CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pc/github/ea872_jogo/src/sdl-render.cpp > CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.i

CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pc/github/ea872_jogo/src/sdl-render.cpp -o CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.s

CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.o: CMakeFiles/classes-sdl.dir/flags.make
CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.o: ../src/sdl-textures.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pc/github/ea872_jogo/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.o -c /home/pc/github/ea872_jogo/src/sdl-textures.cpp

CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pc/github/ea872_jogo/src/sdl-textures.cpp > CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.i

CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pc/github/ea872_jogo/src/sdl-textures.cpp -o CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.s

CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.o: CMakeFiles/classes-sdl.dir/flags.make
CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.o: ../src/sdl-position.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pc/github/ea872_jogo/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.o -c /home/pc/github/ea872_jogo/src/sdl-position.cpp

CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pc/github/ea872_jogo/src/sdl-position.cpp > CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.i

CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pc/github/ea872_jogo/src/sdl-position.cpp -o CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.s

CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.o: CMakeFiles/classes-sdl.dir/flags.make
CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.o: ../src/sdl-view.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pc/github/ea872_jogo/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.o -c /home/pc/github/ea872_jogo/src/sdl-view.cpp

CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pc/github/ea872_jogo/src/sdl-view.cpp > CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.i

CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pc/github/ea872_jogo/src/sdl-view.cpp -o CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.s

CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.o: CMakeFiles/classes-sdl.dir/flags.make
CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.o: ../src/sdl-ptr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pc/github/ea872_jogo/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.o -c /home/pc/github/ea872_jogo/src/sdl-ptr.cpp

CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pc/github/ea872_jogo/src/sdl-ptr.cpp > CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.i

CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pc/github/ea872_jogo/src/sdl-ptr.cpp -o CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.s

CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.o: CMakeFiles/classes-sdl.dir/flags.make
CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.o: ../src/sdl-buffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pc/github/ea872_jogo/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.o -c /home/pc/github/ea872_jogo/src/sdl-buffer.cpp

CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pc/github/ea872_jogo/src/sdl-buffer.cpp > CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.i

CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pc/github/ea872_jogo/src/sdl-buffer.cpp -o CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.s

CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.o: CMakeFiles/classes-sdl.dir/flags.make
CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.o: ../src/sdl-keyread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pc/github/ea872_jogo/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.o -c /home/pc/github/ea872_jogo/src/sdl-keyread.cpp

CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pc/github/ea872_jogo/src/sdl-keyread.cpp > CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.i

CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pc/github/ea872_jogo/src/sdl-keyread.cpp -o CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.s

CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.o: CMakeFiles/classes-sdl.dir/flags.make
CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.o: ../src/sdl-keystate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pc/github/ea872_jogo/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.o -c /home/pc/github/ea872_jogo/src/sdl-keystate.cpp

CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pc/github/ea872_jogo/src/sdl-keystate.cpp > CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.i

CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pc/github/ea872_jogo/src/sdl-keystate.cpp -o CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.s

# Object files for target classes-sdl
classes__sdl_OBJECTS = \
"CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.o" \
"CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.o" \
"CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.o" \
"CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.o" \
"CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.o" \
"CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.o" \
"CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.o" \
"CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.o"

# External object files for target classes-sdl
classes__sdl_EXTERNAL_OBJECTS =

libclasses-sdl.a: CMakeFiles/classes-sdl.dir/src/sdl-render.cpp.o
libclasses-sdl.a: CMakeFiles/classes-sdl.dir/src/sdl-textures.cpp.o
libclasses-sdl.a: CMakeFiles/classes-sdl.dir/src/sdl-position.cpp.o
libclasses-sdl.a: CMakeFiles/classes-sdl.dir/src/sdl-view.cpp.o
libclasses-sdl.a: CMakeFiles/classes-sdl.dir/src/sdl-ptr.cpp.o
libclasses-sdl.a: CMakeFiles/classes-sdl.dir/src/sdl-buffer.cpp.o
libclasses-sdl.a: CMakeFiles/classes-sdl.dir/src/sdl-keyread.cpp.o
libclasses-sdl.a: CMakeFiles/classes-sdl.dir/src/sdl-keystate.cpp.o
libclasses-sdl.a: CMakeFiles/classes-sdl.dir/build.make
libclasses-sdl.a: CMakeFiles/classes-sdl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pc/github/ea872_jogo/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX static library libclasses-sdl.a"
	$(CMAKE_COMMAND) -P CMakeFiles/classes-sdl.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/classes-sdl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/classes-sdl.dir/build: libclasses-sdl.a

.PHONY : CMakeFiles/classes-sdl.dir/build

CMakeFiles/classes-sdl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/classes-sdl.dir/cmake_clean.cmake
.PHONY : CMakeFiles/classes-sdl.dir/clean

CMakeFiles/classes-sdl.dir/depend:
	cd /home/pc/github/ea872_jogo/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pc/github/ea872_jogo /home/pc/github/ea872_jogo /home/pc/github/ea872_jogo/bin /home/pc/github/ea872_jogo/bin /home/pc/github/ea872_jogo/bin/CMakeFiles/classes-sdl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/classes-sdl.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nicolas/work/SDL2Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nicolas/work/SDL2Game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MyGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyGame.dir/flags.make

CMakeFiles/MyGame.dir/Sources/main.cpp.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/Sources/main.cpp.o: ../Sources/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicolas/work/SDL2Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyGame.dir/Sources/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyGame.dir/Sources/main.cpp.o -c /Users/nicolas/work/SDL2Game/Sources/main.cpp

CMakeFiles/MyGame.dir/Sources/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/Sources/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicolas/work/SDL2Game/Sources/main.cpp > CMakeFiles/MyGame.dir/Sources/main.cpp.i

CMakeFiles/MyGame.dir/Sources/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/Sources/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicolas/work/SDL2Game/Sources/main.cpp -o CMakeFiles/MyGame.dir/Sources/main.cpp.s

CMakeFiles/MyGame.dir/Sources/Game.cpp.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/Sources/Game.cpp.o: ../Sources/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicolas/work/SDL2Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyGame.dir/Sources/Game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyGame.dir/Sources/Game.cpp.o -c /Users/nicolas/work/SDL2Game/Sources/Game.cpp

CMakeFiles/MyGame.dir/Sources/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/Sources/Game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicolas/work/SDL2Game/Sources/Game.cpp > CMakeFiles/MyGame.dir/Sources/Game.cpp.i

CMakeFiles/MyGame.dir/Sources/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/Sources/Game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicolas/work/SDL2Game/Sources/Game.cpp -o CMakeFiles/MyGame.dir/Sources/Game.cpp.s

CMakeFiles/MyGame.dir/Sources/GameObject.cpp.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/Sources/GameObject.cpp.o: ../Sources/GameObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicolas/work/SDL2Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MyGame.dir/Sources/GameObject.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyGame.dir/Sources/GameObject.cpp.o -c /Users/nicolas/work/SDL2Game/Sources/GameObject.cpp

CMakeFiles/MyGame.dir/Sources/GameObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/Sources/GameObject.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicolas/work/SDL2Game/Sources/GameObject.cpp > CMakeFiles/MyGame.dir/Sources/GameObject.cpp.i

CMakeFiles/MyGame.dir/Sources/GameObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/Sources/GameObject.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicolas/work/SDL2Game/Sources/GameObject.cpp -o CMakeFiles/MyGame.dir/Sources/GameObject.cpp.s

CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.o: ../Sources/TextureManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicolas/work/SDL2Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.o -c /Users/nicolas/work/SDL2Game/Sources/TextureManager.cpp

CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicolas/work/SDL2Game/Sources/TextureManager.cpp > CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.i

CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicolas/work/SDL2Game/Sources/TextureManager.cpp -o CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.s

CMakeFiles/MyGame.dir/Sources/Map.cpp.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/Sources/Map.cpp.o: ../Sources/Map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicolas/work/SDL2Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/MyGame.dir/Sources/Map.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyGame.dir/Sources/Map.cpp.o -c /Users/nicolas/work/SDL2Game/Sources/Map.cpp

CMakeFiles/MyGame.dir/Sources/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/Sources/Map.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicolas/work/SDL2Game/Sources/Map.cpp > CMakeFiles/MyGame.dir/Sources/Map.cpp.i

CMakeFiles/MyGame.dir/Sources/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/Sources/Map.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicolas/work/SDL2Game/Sources/Map.cpp -o CMakeFiles/MyGame.dir/Sources/Map.cpp.s

# Object files for target MyGame
MyGame_OBJECTS = \
"CMakeFiles/MyGame.dir/Sources/main.cpp.o" \
"CMakeFiles/MyGame.dir/Sources/Game.cpp.o" \
"CMakeFiles/MyGame.dir/Sources/GameObject.cpp.o" \
"CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.o" \
"CMakeFiles/MyGame.dir/Sources/Map.cpp.o"

# External object files for target MyGame
MyGame_EXTERNAL_OBJECTS =

MyGame: CMakeFiles/MyGame.dir/Sources/main.cpp.o
MyGame: CMakeFiles/MyGame.dir/Sources/Game.cpp.o
MyGame: CMakeFiles/MyGame.dir/Sources/GameObject.cpp.o
MyGame: CMakeFiles/MyGame.dir/Sources/TextureManager.cpp.o
MyGame: CMakeFiles/MyGame.dir/Sources/Map.cpp.o
MyGame: CMakeFiles/MyGame.dir/build.make
MyGame: /usr/local/lib/libSDL2_image.dylib
MyGame: CMakeFiles/MyGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nicolas/work/SDL2Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable MyGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyGame.dir/build: MyGame

.PHONY : CMakeFiles/MyGame.dir/build

CMakeFiles/MyGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyGame.dir/clean

CMakeFiles/MyGame.dir/depend:
	cd /Users/nicolas/work/SDL2Game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nicolas/work/SDL2Game /Users/nicolas/work/SDL2Game /Users/nicolas/work/SDL2Game/cmake-build-debug /Users/nicolas/work/SDL2Game/cmake-build-debug /Users/nicolas/work/SDL2Game/cmake-build-debug/CMakeFiles/MyGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyGame.dir/depend


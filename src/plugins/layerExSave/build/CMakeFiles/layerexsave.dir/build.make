# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build

# Include any dependencies generated for this target.
include CMakeFiles/layerexsave.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/layerexsave.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/layerexsave.dir/flags.make

CMakeFiles/layerexsave.dir/Main.cpp.o: CMakeFiles/layerexsave.dir/flags.make
CMakeFiles/layerexsave.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/layerexsave.dir/Main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/layerexsave.dir/Main.cpp.o -c /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/Main.cpp

CMakeFiles/layerexsave.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/layerexsave.dir/Main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/Main.cpp > CMakeFiles/layerexsave.dir/Main.cpp.i

CMakeFiles/layerexsave.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/layerexsave.dir/Main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/Main.cpp -o CMakeFiles/layerexsave.dir/Main.cpp.s

CMakeFiles/layerexsave.dir/Main.cpp.o.requires:

.PHONY : CMakeFiles/layerexsave.dir/Main.cpp.o.requires

CMakeFiles/layerexsave.dir/Main.cpp.o.provides: CMakeFiles/layerexsave.dir/Main.cpp.o.requires
	$(MAKE) -f CMakeFiles/layerexsave.dir/build.make CMakeFiles/layerexsave.dir/Main.cpp.o.provides.build
.PHONY : CMakeFiles/layerexsave.dir/Main.cpp.o.provides

CMakeFiles/layerexsave.dir/Main.cpp.o.provides.build: CMakeFiles/layerexsave.dir/Main.cpp.o


CMakeFiles/layerexsave.dir/savepng.cpp.o: CMakeFiles/layerexsave.dir/flags.make
CMakeFiles/layerexsave.dir/savepng.cpp.o: ../savepng.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/layerexsave.dir/savepng.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/layerexsave.dir/savepng.cpp.o -c /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/savepng.cpp

CMakeFiles/layerexsave.dir/savepng.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/layerexsave.dir/savepng.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/savepng.cpp > CMakeFiles/layerexsave.dir/savepng.cpp.i

CMakeFiles/layerexsave.dir/savepng.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/layerexsave.dir/savepng.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/savepng.cpp -o CMakeFiles/layerexsave.dir/savepng.cpp.s

CMakeFiles/layerexsave.dir/savepng.cpp.o.requires:

.PHONY : CMakeFiles/layerexsave.dir/savepng.cpp.o.requires

CMakeFiles/layerexsave.dir/savepng.cpp.o.provides: CMakeFiles/layerexsave.dir/savepng.cpp.o.requires
	$(MAKE) -f CMakeFiles/layerexsave.dir/build.make CMakeFiles/layerexsave.dir/savepng.cpp.o.provides.build
.PHONY : CMakeFiles/layerexsave.dir/savepng.cpp.o.provides

CMakeFiles/layerexsave.dir/savepng.cpp.o.provides.build: CMakeFiles/layerexsave.dir/savepng.cpp.o


CMakeFiles/layerexsave.dir/utils.cpp.o: CMakeFiles/layerexsave.dir/flags.make
CMakeFiles/layerexsave.dir/utils.cpp.o: ../utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/layerexsave.dir/utils.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/layerexsave.dir/utils.cpp.o -c /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/utils.cpp

CMakeFiles/layerexsave.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/layerexsave.dir/utils.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/utils.cpp > CMakeFiles/layerexsave.dir/utils.cpp.i

CMakeFiles/layerexsave.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/layerexsave.dir/utils.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/utils.cpp -o CMakeFiles/layerexsave.dir/utils.cpp.s

CMakeFiles/layerexsave.dir/utils.cpp.o.requires:

.PHONY : CMakeFiles/layerexsave.dir/utils.cpp.o.requires

CMakeFiles/layerexsave.dir/utils.cpp.o.provides: CMakeFiles/layerexsave.dir/utils.cpp.o.requires
	$(MAKE) -f CMakeFiles/layerexsave.dir/build.make CMakeFiles/layerexsave.dir/utils.cpp.o.provides.build
.PHONY : CMakeFiles/layerexsave.dir/utils.cpp.o.provides

CMakeFiles/layerexsave.dir/utils.cpp.o.provides.build: CMakeFiles/layerexsave.dir/utils.cpp.o


CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o: CMakeFiles/layerexsave.dir/flags.make
CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o: ../LodePNG/lodepng.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o -c /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/LodePNG/lodepng.cpp

CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/LodePNG/lodepng.cpp > CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.i

CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/LodePNG/lodepng.cpp -o CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.s

CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o.requires:

.PHONY : CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o.requires

CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o.provides: CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o.requires
	$(MAKE) -f CMakeFiles/layerexsave.dir/build.make CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o.provides.build
.PHONY : CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o.provides

CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o.provides.build: CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o


CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o: CMakeFiles/layerexsave.dir/flags.make
CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o: /Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o -c /Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp

CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp > CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.i

CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp -o CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.s

CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o.requires:

.PHONY : CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o.requires

CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o.provides: CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o.requires
	$(MAKE) -f CMakeFiles/layerexsave.dir/build.make CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o.provides.build
.PHONY : CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o.provides

CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o.provides.build: CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o


# Object files for target layerexsave
layerexsave_OBJECTS = \
"CMakeFiles/layerexsave.dir/Main.cpp.o" \
"CMakeFiles/layerexsave.dir/savepng.cpp.o" \
"CMakeFiles/layerexsave.dir/utils.cpp.o" \
"CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o" \
"CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o"

# External object files for target layerexsave
layerexsave_EXTERNAL_OBJECTS =

liblayerexsave.a: CMakeFiles/layerexsave.dir/Main.cpp.o
liblayerexsave.a: CMakeFiles/layerexsave.dir/savepng.cpp.o
liblayerexsave.a: CMakeFiles/layerexsave.dir/utils.cpp.o
liblayerexsave.a: CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o
liblayerexsave.a: CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o
liblayerexsave.a: CMakeFiles/layerexsave.dir/build.make
liblayerexsave.a: CMakeFiles/layerexsave.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library liblayerexsave.a"
	$(CMAKE_COMMAND) -P CMakeFiles/layerexsave.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/layerexsave.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/layerexsave.dir/build: liblayerexsave.a

.PHONY : CMakeFiles/layerexsave.dir/build

CMakeFiles/layerexsave.dir/requires: CMakeFiles/layerexsave.dir/Main.cpp.o.requires
CMakeFiles/layerexsave.dir/requires: CMakeFiles/layerexsave.dir/savepng.cpp.o.requires
CMakeFiles/layerexsave.dir/requires: CMakeFiles/layerexsave.dir/utils.cpp.o.requires
CMakeFiles/layerexsave.dir/requires: CMakeFiles/layerexsave.dir/LodePNG/lodepng.cpp.o.requires
CMakeFiles/layerexsave.dir/requires: CMakeFiles/layerexsave.dir/Users/tony/workspace/github/mkrkr/src/plugins/win32/tp_stub.cpp.o.requires

.PHONY : CMakeFiles/layerexsave.dir/requires

CMakeFiles/layerexsave.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/layerexsave.dir/cmake_clean.cmake
.PHONY : CMakeFiles/layerexsave.dir/clean

CMakeFiles/layerexsave.dir/depend:
	cd /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build /Users/tony/workspace/github/mkrkr/src/plugins/layerExSave/build/CMakeFiles/layerexsave.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/layerexsave.dir/depend


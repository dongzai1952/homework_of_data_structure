# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\homework\hello\src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\homework\hello\build

# Include any dependencies generated for this target.
include CMakeFiles/Hello.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Hello.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Hello.dir/flags.make

CMakeFiles/Hello.dir/hello.cpp.obj: CMakeFiles/Hello.dir/flags.make
CMakeFiles/Hello.dir/hello.cpp.obj: E:/homework/hello/src/hello.cpp
CMakeFiles/Hello.dir/hello.cpp.obj: CMakeFiles/Hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\homework\hello\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Hello.dir/hello.cpp.obj"
	C:\PROGRA~1\mingw64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Hello.dir/hello.cpp.obj -MF CMakeFiles\Hello.dir\hello.cpp.obj.d -o CMakeFiles\Hello.dir\hello.cpp.obj -c E:\homework\hello\src\hello.cpp

CMakeFiles/Hello.dir/hello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Hello.dir/hello.cpp.i"
	C:\PROGRA~1\mingw64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\homework\hello\src\hello.cpp > CMakeFiles\Hello.dir\hello.cpp.i

CMakeFiles/Hello.dir/hello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Hello.dir/hello.cpp.s"
	C:\PROGRA~1\mingw64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\homework\hello\src\hello.cpp -o CMakeFiles\Hello.dir\hello.cpp.s

# Object files for target Hello
Hello_OBJECTS = \
"CMakeFiles/Hello.dir/hello.cpp.obj"

# External object files for target Hello
Hello_EXTERNAL_OBJECTS =

Hello.exe: CMakeFiles/Hello.dir/hello.cpp.obj
Hello.exe: CMakeFiles/Hello.dir/build.make
Hello.exe: CMakeFiles/Hello.dir/linkLibs.rsp
Hello.exe: CMakeFiles/Hello.dir/objects1.rsp
Hello.exe: CMakeFiles/Hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\homework\hello\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Hello.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Hello.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Hello.dir/build: Hello.exe
.PHONY : CMakeFiles/Hello.dir/build

CMakeFiles/Hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Hello.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Hello.dir/clean

CMakeFiles/Hello.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\homework\hello\src E:\homework\hello\src E:\homework\hello\build E:\homework\hello\build E:\homework\hello\build\CMakeFiles\Hello.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Hello.dir/depend


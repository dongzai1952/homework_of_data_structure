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
CMAKE_SOURCE_DIR = E:\homework\List

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\homework\List\build

# Include any dependencies generated for this target.
include CMakeFiles/MyExe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyExe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyExe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyExe.dir/flags.make

CMakeFiles/MyExe.dir/src/List.cpp.obj: CMakeFiles/MyExe.dir/flags.make
CMakeFiles/MyExe.dir/src/List.cpp.obj: CMakeFiles/MyExe.dir/includes_CXX.rsp
CMakeFiles/MyExe.dir/src/List.cpp.obj: E:/homework/List/src/List.cpp
CMakeFiles/MyExe.dir/src/List.cpp.obj: CMakeFiles/MyExe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\homework\List\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyExe.dir/src/List.cpp.obj"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyExe.dir/src/List.cpp.obj -MF CMakeFiles\MyExe.dir\src\List.cpp.obj.d -o CMakeFiles\MyExe.dir\src\List.cpp.obj -c E:\homework\List\src\List.cpp

CMakeFiles/MyExe.dir/src/List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyExe.dir/src/List.cpp.i"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\homework\List\src\List.cpp > CMakeFiles\MyExe.dir\src\List.cpp.i

CMakeFiles/MyExe.dir/src/List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyExe.dir/src/List.cpp.s"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\homework\List\src\List.cpp -o CMakeFiles\MyExe.dir\src\List.cpp.s

# Object files for target MyExe
MyExe_OBJECTS = \
"CMakeFiles/MyExe.dir/src/List.cpp.obj"

# External object files for target MyExe
MyExe_EXTERNAL_OBJECTS =

MyExe.exe: CMakeFiles/MyExe.dir/src/List.cpp.obj
MyExe.exe: CMakeFiles/MyExe.dir/build.make
MyExe.exe: CMakeFiles/MyExe.dir/linkLibs.rsp
MyExe.exe: CMakeFiles/MyExe.dir/objects1.rsp
MyExe.exe: CMakeFiles/MyExe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\homework\List\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyExe.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MyExe.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyExe.dir/build: MyExe.exe
.PHONY : CMakeFiles/MyExe.dir/build

CMakeFiles/MyExe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MyExe.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MyExe.dir/clean

CMakeFiles/MyExe.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\homework\List E:\homework\List E:\homework\List\build E:\homework\List\build E:\homework\List\build\CMakeFiles\MyExe.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MyExe.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\cmake-build-debug"

# Include any dependencies generated for this target.
include matrixApp/CMakeFiles/matrixApp.dir/depend.make
# Include the progress variables for this target.
include matrixApp/CMakeFiles/matrixApp.dir/progress.make

# Include the compile flags for this target's objects.
include matrixApp/CMakeFiles/matrixApp.dir/flags.make

matrixApp/CMakeFiles/matrixApp.dir/main.cpp.obj: matrixApp/CMakeFiles/matrixApp.dir/flags.make
matrixApp/CMakeFiles/matrixApp.dir/main.cpp.obj: ../matrixApp/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object matrixApp/CMakeFiles/matrixApp.dir/main.cpp.obj"
	cd /d C:\Users\PC\Desktop\NEWFOL~4\JiPP2\projekt\CMAKE-~1\MATRIX~1 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\matrixApp.dir\main.cpp.obj -c "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\matrixApp\main.cpp"

matrixApp/CMakeFiles/matrixApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixApp.dir/main.cpp.i"
	cd /d C:\Users\PC\Desktop\NEWFOL~4\JiPP2\projekt\CMAKE-~1\MATRIX~1 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\matrixApp\main.cpp" > CMakeFiles\matrixApp.dir\main.cpp.i

matrixApp/CMakeFiles/matrixApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixApp.dir/main.cpp.s"
	cd /d C:\Users\PC\Desktop\NEWFOL~4\JiPP2\projekt\CMAKE-~1\MATRIX~1 && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\matrixApp\main.cpp" -o CMakeFiles\matrixApp.dir\main.cpp.s

# Object files for target matrixApp
matrixApp_OBJECTS = \
"CMakeFiles/matrixApp.dir/main.cpp.obj"

# External object files for target matrixApp
matrixApp_EXTERNAL_OBJECTS =

matrixApp/matrixApp.exe: matrixApp/CMakeFiles/matrixApp.dir/main.cpp.obj
matrixApp/matrixApp.exe: matrixApp/CMakeFiles/matrixApp.dir/build.make
matrixApp/matrixApp.exe: matrixLib/libmatrixLib.a
matrixApp/matrixApp.exe: matrixApp/CMakeFiles/matrixApp.dir/linklibs.rsp
matrixApp/matrixApp.exe: matrixApp/CMakeFiles/matrixApp.dir/objects1.rsp
matrixApp/matrixApp.exe: matrixApp/CMakeFiles/matrixApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable matrixApp.exe"
	cd /d C:\Users\PC\Desktop\NEWFOL~4\JiPP2\projekt\CMAKE-~1\MATRIX~1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\matrixApp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
matrixApp/CMakeFiles/matrixApp.dir/build: matrixApp/matrixApp.exe
.PHONY : matrixApp/CMakeFiles/matrixApp.dir/build

matrixApp/CMakeFiles/matrixApp.dir/clean:
	cd /d C:\Users\PC\Desktop\NEWFOL~4\JiPP2\projekt\CMAKE-~1\MATRIX~1 && $(CMAKE_COMMAND) -P CMakeFiles\matrixApp.dir\cmake_clean.cmake
.PHONY : matrixApp/CMakeFiles/matrixApp.dir/clean

matrixApp/CMakeFiles/matrixApp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt" "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\matrixApp" "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\cmake-build-debug" "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\cmake-build-debug\matrixApp" "C:\Users\PC\Desktop\New folder (4)\JiPP2\projekt\cmake-build-debug\matrixApp\CMakeFiles\matrixApp.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : matrixApp/CMakeFiles/matrixApp.dir/depend


1. Cmake gen and Cmake build (or build from Microsoft Visual Studio), then run program. At root directory (CMakeLists.txt):
mkdir -p build-vs
cd build-vs
cmake ..
cmake --build-vs .

2. Cmake gen for Code Block, then build from Code Block. At root directory (CMakeLists.txt):
mkdir -p build-cb
cd build-cb
cmake -G "CodeBlocks - MinGW Makefiles" ..
Build/Run from CodeBlocks

3. Cmake gen for Eclipse. At root directory (CMakeLists.txt):
cmake -G "Eclipse CDT4 - MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug .
Import exist project from Eclipse CDT.
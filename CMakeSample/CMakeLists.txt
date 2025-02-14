cmake_minimum_required(VERSION 3.10)
project(CMakeProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add external dependencies
include(FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 11.1.3  # Latest version at this time
)
FetchContent_MakeAvailable(fmt)

# Add subdirectories
add_subdirectory(src)

# Create executable
add_executable(CMakeProject src/main.cpp)

# Link libraries
target_link_libraries(CMakeProject PRIVATE fmt::fmt src_utils)
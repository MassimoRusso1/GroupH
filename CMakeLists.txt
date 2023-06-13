# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(programdraft VERSION 1.0 LANGUAGES CXX)

# define the c++ standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic)

# add a library for your student structure
add_library(programdraft_lib src/developer.cpp)
# add the includes to the library
target_include_directories(programdraft_lib PUBLIC include)

# add an executabel and assign files to it
add_executable(programdraft_exec src/main.cpp)

# add include directories to executable
target_include_directories(programdraft_exec PUBLIC include)
# link your libraries
target_link_libraries(programdraft_exec PRIVATE programdraft_lib)

enable_testing()
# check if we have gtest
find_package(GTest REQUIRED)
# include the gtest CMake stuff
include(GoogleTest)
# create a test executable
add_executable(programdraft_tests test/test_developer.cpp)
# link the gtest libraries
target_link_libraries(programdraft_tests PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
target_link_libraries(programdraft_tests PRIVATE programdraft_lib)
# add the include directories
target_include_directories(programdraft_tests PUBLIC include)
# discover and add tests to the test list
gtest_discover_tests(programdraft_tests)
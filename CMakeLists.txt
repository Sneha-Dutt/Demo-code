cmake_minimum_required(VERSION 3.10)
project(ExerciseCode)

# Enable testing
enable_testing()

# Add source files
add_executable(main main.cpp)

# Add GoogleTest
find_package(GTest REQUIRED)

# Add test files
add_executable(runTest testExerciseCode.cpp)

# Link GoogleTest libraries
target_link_libraries(runTest GTest::GTest GTest::Main)

# Add tests
add_test(NAME SensorDataTests COMMAND runTest)

add_executable(aoc06a src/main.cpp src/aoc.cpp)
target_compile_definitions(aoc06a PRIVATE AOC_INPUT_FILEPATH="${CMAKE_CURRENT_LIST_DIR}/data/input.txt")
target_link_libraries(aoc06a PRIVATE range-v3 fmt::fmt)

add_executable(aoc06a-test test/test.cpp src/aoc.cpp)
target_include_directories(aoc06a-test PRIVATE src)
target_link_libraries(aoc06a-test PRIVATE Catch2::Catch2WithMain)

target_compile_definitions(aoc06a-test PRIVATE AOC_INPUT_FILEPATH="${CMAKE_CURRENT_LIST_DIR}/data/test.txt")
target_link_libraries(aoc06a-test PRIVATE range-v3 fmt::fmt)

catch_discover_tests(aoc06a-test)
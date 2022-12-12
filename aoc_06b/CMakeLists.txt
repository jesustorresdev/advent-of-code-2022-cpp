add_executable(aoc06b src/main.cpp src/aoc.cpp)
target_compile_definitions(aoc06b PRIVATE AOC_INPUT_FILEPATH="${CMAKE_CURRENT_LIST_DIR}/data/input.txt")
target_link_libraries(aoc06b PRIVATE range-v3 fmt::fmt)

add_executable(aoc06b-test test/test.cpp src/aoc.cpp)
target_include_directories(aoc06b-test PRIVATE src)
target_link_libraries(aoc06b-test PRIVATE Catch2::Catch2WithMain)

target_compile_definitions(aoc06b-test PRIVATE AOC_INPUT_FILEPATH="${CMAKE_CURRENT_LIST_DIR}/data/test.txt")
target_link_libraries(aoc06b-test PRIVATE range-v3 fmt::fmt)

catch_discover_tests(aoc06b-test)
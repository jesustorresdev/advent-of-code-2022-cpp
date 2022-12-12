set(AOC_06_COMMON_DIR ${PROJECT_SOURCE_DIR}/aoc_06-common)

add_executable(aoc06b src/main.cpp ${AOC_06_COMMON_DIR}/src/aoc.cpp)
target_compile_definitions(aoc06b PRIVATE AOC_INPUT_FILEPATH="${AOC_06_COMMON_DIR}/data/input.txt")
target_include_directories(aoc06b PRIVATE ${PROJECT_SOURCE_DIR}/aoc_06-common/src)
target_link_libraries(aoc06b PRIVATE range-v3 fmt::fmt)

add_executable(aoc06b-test test/test.cpp ${AOC_06_COMMON_DIR}/src/aoc.cpp)
target_compile_definitions(aoc06b-test PRIVATE AOC_INPUT_FILEPATH="${AOC_06_COMMON_DIR}/data/test.txt")
target_include_directories(aoc06b-test PRIVATE ${AOC_06_COMMON_DIR}/src)
target_link_libraries(aoc06b-test PRIVATE range-v3)

target_link_libraries(aoc06b-test PRIVATE Catch2::Catch2WithMain)
catch_discover_tests(aoc06b-test)
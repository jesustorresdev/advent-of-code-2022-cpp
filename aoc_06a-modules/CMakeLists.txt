add_executable(aoc06a-modules src/main.cpp src/aoc.ixx)
target_compile_definitions(aoc06a-modules PRIVATE AOC_INPUT_FILEPATH="${CMAKE_CURRENT_LIST_DIR}/data/test.txt")
target_link_libraries(aoc06a-modules PRIVATE range-v3 fmt::fmt)
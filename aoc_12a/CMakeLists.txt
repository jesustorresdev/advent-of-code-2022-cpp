set_source_files_properties(src/aoc.cpp PROPERTIES COMPILE_FLAGS /interface)

add_executable(aoc12a src/main.cpp src/aoc.cpp)
target_compile_definitions(aoc12a PRIVATE AOC_INPUT_FILEPATH="${CMAKE_CURRENT_LIST_DIR}/data/input.txt")
target_include_directories(aoc12a PRIVATE src)
target_link_libraries(aoc12a PRIVATE fmt::fmt)

add_executable(aoc12a-test test/test.cpp src/aoc.cpp)
target_compile_definitions(aoc12a-test PRIVATE AOC_INPUT_FILEPATH="${CMAKE_CURRENT_LIST_DIR}/data/test.txt")
target_include_directories(aoc12a-test PRIVATE src)

target_link_libraries(aoc12a-test PRIVATE Catch2::Catch2WithMain)
catch_discover_tests(aoc12a-test)
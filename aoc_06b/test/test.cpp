#include <catch2/catch_test_macros.hpp>

#include <aoc.hpp>

TEST_CASE("Test AOC 06b")
{
	SECTION("Test input reading")
	{
		std::string input = aoc::GetInput(AOC_INPUT_FILEPATH);

		REQUIRE(input == "mjqjpqmgbljsphdztnvjfqwrcgsmlb");
	}

	SECTION("Test answer")
	{
		std::string input = aoc::GetInput(AOC_INPUT_FILEPATH);
		auto [position, marker] = aoc::Solve(input, 14);

		REQUIRE(position == 19);
		REQUIRE(marker == "qmgbljsphdztnv");
	}
}
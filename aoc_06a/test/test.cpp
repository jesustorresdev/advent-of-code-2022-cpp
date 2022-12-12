#include <catch2/catch_test_macros.hpp>

#include <aoc.hpp>

TEST_CASE("Test AOC 06a")
{
	SECTION("Test input reading")
	{
		std::string input = aoc::GetInput(AOC_INPUT_FILEPATH);

		REQUIRE(input == "mjqjpqmgbljsphdztnvjfqwrcgsmlb");
	}

	SECTION("Test answer")
	{
		std::string input = aoc::GetInput(AOC_INPUT_FILEPATH);
		auto [position, marker] = aoc::Solve(input, 4);

		REQUIRE(position == 7);
		REQUIRE(marker == "jpqm");
	}
}
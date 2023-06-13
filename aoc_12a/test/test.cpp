#include <catch2/catch_test_macros.hpp>

import aoc;
import std.core;

TEST_CASE("Test AOC 12a")
{
	SECTION("Test input reading")
	{
		auto input = aoc::GetInput(AOC_INPUT_FILEPATH);

		//REQUIRE(input == "mjqjpqmgbljsphdztnvjfqwrcgsmlb");
	}

	SECTION("Test answer")
	{
		auto input = aoc::GetInput(AOC_INPUT_FILEPATH);
		uint32_t steps = std::apply(aoc::Solve, input);

		REQUIRE(steps == 31);
	}
}
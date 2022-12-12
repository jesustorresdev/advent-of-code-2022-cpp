#include <fmt/core.h>

import aoc;
import std.core;

int main()
{
	std::string input = aoc::GetInput(AOC_INPUT_FILEPATH);
  	auto [pos, mark] = aoc::Solve(input);

	fmt::print("{} ({})", pos, mark);

	return 0;
}

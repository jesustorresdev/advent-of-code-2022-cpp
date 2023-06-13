#include <fmt/core.h>

import aoc;

int main()
{
	auto input = aoc::GetInput(AOC_INPUT_FILEPATH);
  	uint32_t steps = std::apply(aoc::Solve, input);

	fmt::print("{}\n", steps);

	return 0;
}

#include <fmt/core.h>

#include <aoc.hpp>

int main()
{
	std::string input = aoc::GetInput(AOC_INPUT_FILEPATH);
  	auto [position, marker] = aoc::Solve(input, 14);

	fmt::print("{} ({})\n", position, marker);

	return 0;
}

#include <string>
#include <tuple>

namespace aoc
{
	using Answer = std::tuple<uint64_t, std::string>;

	std::string GetInput(const std::string& filepath);
	Answer Solve(const std::string& input);
}
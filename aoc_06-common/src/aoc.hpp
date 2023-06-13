#include <string>
#include <tuple>

namespace aoc
{
	using Answer = std::tuple<uint64_t, std::string>;

	[[nodiscard]]
	std::string GetInput(const std::string_view& filepath);
	[[nodiscard]]
	Answer Solve(const std::string& input, int marker_size);
}
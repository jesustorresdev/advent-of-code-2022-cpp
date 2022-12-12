#include <cassert>
#include <fstream>
#include <vector>
#include <range/v3/view/enumerate.hpp>

#include "aoc.hpp"

namespace aoc
{
	using namespace std::string_literals;

	std::string GetInput(const std::string& filepath)
	{
		std::ifstream file{filepath};
		assert(file.is_open());

		std::string line;
		std::getline(file, line);
		assert(!line.empty());

		return line;
	}

	Answer Solve(const std::string& input)
	{
		for (std::vector<char> stack; auto [pos, value] : input | ranges::views::enumerate)
		{
			auto found = std::find(stack.begin(), stack.end(), value);
			if (found == stack.end())
			{
				stack.push_back(value);
				if (stack.size() == 14)
				{
					return {
						pos + 1,	// +1 porque en el problema el índice empieza en 1
						std::string{stack.begin(), stack.end()}
					};
				}
			}
			else
			{
				stack.erase(stack.begin(), found + 1);
				stack.push_back(value);
			}
		}

		return {-1, ""};
	}
}
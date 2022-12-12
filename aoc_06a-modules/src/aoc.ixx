module;

#include <cassert>
#include <range/v3/view/enumerate.hpp>

export module aoc;

import std.core;

//namespace aoc
//{
	//using namespace std::string_literals;

//	export using Answer = std::tuple<uint64_t, std::string>;

//	export std::string GetInput(const std::string& filepath)
//	{
////		std::ifstream file{filepath};
////		assert(file.is_open());
////
////		std::string line;
////		std::getline(file, line);
////		assert(!line.empty());
////
////		return line;
//
//		return "abc"s;
//	}

	export std::tuple<uint64_t, std::string> Solve(const std::string& input)
	{
//		for (std::vector<char> stack; auto [pos, value] : input | ranges::views::enumerate)
//		{
//			auto found = std::find(stack.begin(), stack.end(), value);
//			if (found == stack.end())
//			{
//				stack.push_back(value);
//				if (stack.size() == 4)
//				{
//					return {
//						pos + 1,	// +1 porque en el problema el índice empieza en 1
//						std::string{stack.begin(), stack.end()}
//					};
//				}
//			}
//			else
//			{
//				stack.erase(stack.begin(), found + 1);
//				stack.push_back(value);
//			}
//		}

		return {-1, ""};
	}
//}
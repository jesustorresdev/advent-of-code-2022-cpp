#include <cassert>

export module aoc;

import std.core;

namespace aoc
{
	export struct point
	{
		int x;
		int y;
	};

	// TODO: Use a module partition when they are available
	export template<typename T>
	class matrix
	{
	 public:
		constexpr matrix(std::size_t width, std::size_t height)
			: width_{ width }, height_{ height }, data_(width * height)
		{
		}

		// TODO: Use multidimensional subscript operator [] (P2128R5)
		[[nodiscard]]
		constexpr const T& operator()(std::size_t x, std::size_t y) const
		{
			if (x >= width_ || y >= height_)
			{
				throw std::out_of_range("Index out of range");
			}

			return data_[y * width_ + x];
		}

		[[nodiscard]]
		constexpr T& operator()(std::size_t x, std::size_t y)
		{
			return const_cast<T&>(const_cast<const matrix*>(this)->operator()(x, y));
		}

		[[nodiscard]]
		constexpr const T& operator()(point p) const
		{
			return this->operator()(p.x, p.y);
		}

		[[nodiscard]]
		constexpr T& operator()(point p)
		{
			return const_cast<T&>(const_cast<const matrix*>(this)->operator()(p));
		}

		[[nodiscard]]
		constexpr std::size_t width() const
		{
			return width_;
		}

		[[nodiscard]]
		constexpr std::size_t height() const
		{
			return height_;
		}

		[[nodiscard]]
		constexpr T* data()
		{
			return data_.data();
		}

		[[nodiscard]]
		constexpr const T* data() const
		{
			return data_.data();
		}

	 private:
		std::vector <T> data_;
		std::size_t width_;
		std::size_t height_;
	};

	export [[nodiscard]]
	std::tuple<matrix<uint8_t>, point, point> GetInput(const std::string& filepath)
	{
		std::ifstream file{filepath};
		assert(file.is_open());

		std::vector<std::string> content = std::vector<std::string>{
			std::istream_iterator<std::string>{file}, std::istream_iterator<std::string>{}};

		matrix<uint8_t> heightMap{content[0].size(), content.size()};
		point start, goal;
		for (auto& line : content)
		{
			heigthMap.data()[line.size()] = line;
		}

		return {heightMap, point{}, point{}};
	}

	export [[nodiscard]]
	uint32_t Solve(matrix<uint8_t> heightMap, point start, point goal)
	{
		return 0;
	}
}
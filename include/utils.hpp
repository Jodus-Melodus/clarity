#pragma once

#include <vector>
#include <string>
#include <array>
#include <algorithm>

namespace utils
{
    std::vector<std::string> split(const std::string &s, char delimiter);

    template <typename T, std::size_t N>
    bool contains(const std::array<T, N> &array, const T &value);
} // namespace utils

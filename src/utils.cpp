#include <sstream>

#include "utils.hpp"

namespace utils
{
    std::vector<std::string> split(const std::string &s, char delimiter)
    {
        std::vector<std::string> tokens;
        std::string token;
        std::stringstream ss(s);

        while (std::getline(ss, token, delimiter))
        {
            tokens.push_back(token);
        }
        return tokens;
    }

    template <typename T, std::size_t N>
    bool contains(const std::array<T, N> &array, const T &value)
    {
        for (const auto &v : arr)
        {
            if (v == value)
                return true;
        }

        return false;
    }

} // namespace utils
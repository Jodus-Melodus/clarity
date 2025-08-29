#pragma once

#include <vector>
#include <string>
#include <array>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <tuple>

namespace utils
{
    inline std::vector<std::string> split(const std::string &s, char delimiter)
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
        for (const auto &v : array)
        {
            if (v == value)
                return true;
        }

        return false;
    }

    int writeFile(const std::string &path, const std::string content)
    {
        std::ofstream out(path);

        if (!out)
        {
            std::cerr << "Error opening file for writing" << std::endl;
            return 1;
        }

        out << content << std::endl;
        out.close();
        return 0;
    }

    std::tuple<int, std::string> readFile(const std::string &path)
    {
        std::ifstream in(path);

        if (!in)
        {
            std::cerr << "Error opening file for reading" << std::endl;
            return std::make_tuple(1, nullptr);
        }

        std::string buffer;
        std::string out;

        while (std::getline(in, buffer))
        {
            out += buffer;
        }

        in.close();
        return std::make_tuple(0, out);
    }
} // namespace utils

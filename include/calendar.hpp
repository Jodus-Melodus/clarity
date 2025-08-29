#pragma once
#include <vector>
#include <variant>
#include <array>

#include "task.hpp"

namespace calendar
{
    namespace
    {
        constexpr std::array<int, 7> days31 = {1, 3, 5, 7, 8, 10, 12};
        constexpr std::array<int, 4> days30 = {4, 6, 7, 11};
    }

    class Month
    {
    private:
        int monthNumber;

    public:
        int DayCount;

        std::array<std::vector<Task>, 31> days;
        Month(int month);
        ~Month();
    };

    std::ostream &operator<<(std::ostream &os, Month &month);
} // namespace calendar

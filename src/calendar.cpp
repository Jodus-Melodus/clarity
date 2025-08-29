#include <iostream>

#include "calendar.hpp"
#include "utils.hpp"

namespace calendar
{
    Month::Month(int month)
    {
        this->monthNumber = month;
        if (utils::contains(days31, month))

        {
            this->DayCount = 31;
        }
        else if (utils::contains(days30, month))
        {
            this->DayCount = 30;
        }
        else
        {
            this->DayCount = 29;
        }
    }

    Month::~Month()
    {
    }

    std::ostream &operator<<(std::ostream &os, Month &month)
    {
        std::vector<int> d;
        for (int i = 0; i < month.DayCount; i++)
        {
            d.push_back(i);
        }

        int left = 0;
        int right = left + 7;

        while (right != month.DayCount)
        {
            std::vector<int> slice(d.begin() + left, d.begin() + right);
            for (int x : slice)
                std::cout << x << " ";
            std::cout << std::endl;
            left = std::min(left + 7, month.DayCount);
            right = std::min(left + 7, month.DayCount);
        }
        return os;
    }
} // namespace calendar

#include "calendar.hpp"
#include "utils.hpp"

namespace calendar
{
    Month::Month(int month)
    {
        this->monthNumber = month;
        if (utils::contains(days31, month))

        {
            this->monthDayCount = 31;
        }
        else if (utils::contains(days30, month))
        {
            this->monthDayCount = 30;
        }
        else
        {
            this->monthDayCount = 29;
        }
    }

    Month::~Month()
    {
    }
} // namespace calendar

#pragma once
#include <string>
#include <vector>

#include "task.hpp"

namespace cli
{
    int start();
    int createNewTask(std::vector<Task> &tasks);
    std::string readLine(const std::string &prompt);

} // namespace cli

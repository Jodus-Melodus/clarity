#pragma once
#include <string>

class Task
{
private:
    std::string title;
    std::string description;
    bool completed;

public:
    Task(const std::string title, const std::string description);
    ~Task();
};

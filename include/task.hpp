#pragma once
#include <string>

class Task
{
private:
    std::string title;
    std::string description;
    bool completed;

public:
    Task(std::string title, std::string description);
    ~Task();
};

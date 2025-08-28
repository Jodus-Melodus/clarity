#include "task.hpp"

Task::Task(const std::string title, const std::string description)
{
    this->title = title;
    this->description = description;
    this->completed = false;
}

Task::~Task()
{
}

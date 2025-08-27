#include "task.hpp"

Task::Task(std::string title, std::string description)
{
    this->title = title;
    this->description = description;
    this->completed = false;
}

Task::~Task()
{
}

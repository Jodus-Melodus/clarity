#include <vector>
#include <iostream>

#include "cli.hpp"
#include "utils.hpp"
#include "task.hpp"

namespace cli
{

    std::string readLine(const std::string &prompt)
    {
        std::string buffer;
        std::cout << prompt;
        std::getline(std::cin, buffer);
        return buffer;
    }

    int start()
    {
        std::string cmd = "";
        std::vector<std::string> args;
        int exitCode = -1;
        std::vector<Task> tasks;

        while (exitCode == -1)
        {
            cmd = readLine("> ");
            args = utils::split(cmd, ' ');
            if (args.size() < 1)
            {
                continue;
            }
            cmd = args.at(0);
            args.erase(args.begin());

            if (cmd == "new")
            {
                if (args.size() == 1)
                {
                    std::string newType = args.at(0);

                    if (newType == "task")
                    {
                        exitCode = createNewTask(tasks);
                    }
                    else
                    {
                        std::cout << "Unknown type" << std::endl;
                    }
                }
                else
                {
                    std::cout << "Expected type" << std::endl;
                }
            }
            else if (cmd == "exit" or cmd == "close")
            {
                exitCode = 0;
            }
            else
            {
                std::cout << "Unknown Command" << std::endl;
            }
        }

        return exitCode;
    }

    int createNewTask(std::vector<Task> &tasks)
    {
        std::string taskName = readLine("Enter task name >");
        std::string taskDescription = readLine("Enter task description >");
        Task newTask(taskName, taskDescription);
        tasks.push_back(newTask);
        return -1;
    }
} // namespace cli
#include <iostream>
#include <string>

namespace cli
{
    std::string readLine(std::string prompt)
    {
        std::string buffer;
        std::cout << prompt;
        std::getline(std::cin, buffer);
        return buffer;
    }

    int start()
    {
        std::string cmd = "";

        while (true)
        {
            cmd = readLine("> ");

            std::cout << cmd << std::endl;
        }
    }
} // namespace cli
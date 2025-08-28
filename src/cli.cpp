#include <iostream>
#include <string>
#include <vector>

#include "task.hpp"

namespace cli
{
    using namespace std;

    string readLine(string prompt)
    {
        string buffer;
        cout << prompt;
        getline(cin, buffer);
        return buffer;
    }

    int start()
    {
        string cmd = "";
        int exitCode = -1;
        vector<Task> tasks;

        while (exitCode == -1)
        {
            cmd = readLine("> ");

            if (cmd == "exit" or cmd == "close")
            {
                exitCode = 0;
            }
            else
            {
                exitCode = 0;
            }
        }

        return exitCode;
    }
} // namespace cli
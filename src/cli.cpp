#include <vector>
#include <iostream>

#include "cli.hpp"
#include "utils.hpp"
#include "task.hpp"

using namespace std;
namespace cli
{

    string readLine(const string &prompt)
    {
        string buffer;
        cout << prompt;
        getline(cin, buffer);
        return buffer;
    }

    int start()
    {
        string cmd = "";
        vector<string> args;
        int exitCode = -1;
        vector<Task> tasks;

        while (exitCode == -1)
        {
            cmd = readLine("> ");
            args = utils::split(cmd, ' ');
            cmd = args.at(0);

            if (cmd == "new")
            {
                string newType = args.at(1);
            }
            else if (cmd == "exit" or cmd == "close")
            {
                exitCode = 0;
            }
            else
            {
                cout << "Unkown Command" << endl;
            }
        }

        return exitCode;
    }
} // namespace cli
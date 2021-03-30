#include "loader.h"

#include <iostream>
#include <fstream>

namespace Loader
{
    bool readFile(std::string path, std::string* content)
    {
        std::string line;
        std::ifstream file(path);

        if(file.is_open())
        {
            while (std::getline(file, line))
            {
                *content += line + "\n";
            }

            content->erase(content->end() - 1);

            file.close();
            return true;
        }
        return false;
    }

    bool writeFile(std::string path, std::string content)
    {
        std::ofstream file(path);
        if(file.is_open())
        {
            file << content;

            return true;
        }
        return false;
    }
}

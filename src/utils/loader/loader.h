#pragma once

#include <string>

namespace Loader
{
    bool readFile(std::string path, std::string* content);

    bool writeFile(std::string path, std::string content);
}
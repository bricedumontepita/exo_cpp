
#include "sources.h"
#include <cmath>
#include <string>
#include <iostream>

#include <fstream>

unsigned read_file(std::ifstream& file, std::string pattern)
{
    unsigned count = 0;
    std::string word;
    while (file >> word) {
        if (word.find(pattern) != std::string::npos) {
            count++;
        }
    }
    return count;
}

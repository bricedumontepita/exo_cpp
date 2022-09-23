#include <iostream>
#include <unistd.h>
#include "sources.h"
#include <string>


int main(int argc, char *argv[])
{
    std::string filename = argv[1];
    std::string pattern = argv[2];

    std::ifstream file;
    file.open(filename);
    if (!file.is_open()) {
        std::cout << "The file " << filename << " could not be opened.\n";
        return 1;
    }

    std::cout << "The file " << filename << " contains " << read_file(file, pattern) << " words containing the motive " << pattern << "\n";
    return 0;
}
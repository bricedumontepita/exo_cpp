#include <iostream>
#include <unistd.h>
#include "sources.h"

int main()
{
    unsigned n;
    while ((std::cin >> n)) {
        std::cout << n << " is a prime: " << (is_prime(n) ? "True" : "False") << "\n";
    }
    return 0;
}
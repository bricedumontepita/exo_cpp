
#include "sources.h"
#include <cmath>

bool is_prime(unsigned n)
{
    if (n <= 1 || n % 2 == 0)
        return false;
    auto sqrt = std::sqrt(n);
    for (unsigned i = 3; i < sqrt; i+=2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

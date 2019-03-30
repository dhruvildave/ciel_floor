
#include "ciel_floor.hpp"

long long ciel_func(std::string &str)
{
    if (is_int(str))
        return floor_func(str);

    return floor_func(str) + 1;
}

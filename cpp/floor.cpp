
#include "ciel_floor.hpp"

long long floor_func(std::string &str)
{
    long long num{stoi(str)};
    if (is_int(str))
        return num;

    if (num < 0)
        return num - 1;

    return num;
}

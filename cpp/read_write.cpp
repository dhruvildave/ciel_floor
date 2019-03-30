
#include "ciel_floor.hpp"
#include <cctype>

int check_sign(std::string &num)
{
    if (num[0] == '-')
        return -1;

    return 1;
}

bool is_int(std::string &num)
{
    for (char c : num)
    {
        if (c == '.')
            return false;
    }

    return true;
}

long long stoi(std::string &str)
{
    long long num{};
    for (char c : str)
    {
        if (c == '-')
            continue;

        if (isdigit(c))
        {
            num *= 10;
            num += (c - '0');
        }

        else if (c == '.' || !isdigit(c))
            break;
    }

    return num * check_sign(str);
}

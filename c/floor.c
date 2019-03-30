
#include "ciel_floor.h"

long floor_func(char str[])
{
    long num = write_num(str);
    if (is_integer(str))
        return num;

    if (num < 0)
        return num - 1;

    return num;
}

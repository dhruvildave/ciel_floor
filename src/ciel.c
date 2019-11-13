
#include "pch.h"

long ciel_func(char str[]) {
    if (is_integer(str)) {
        return floor_func(str);
    }

    return floor_func(str) + 1;
}

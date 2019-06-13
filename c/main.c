
#include "pch.h"

int main(void) {
    char num[BUFSIZ] = {0};

    while (read_num(num, BUFSIZ) > 0) {
        printf("\tnum == %s", num);
        printf("\tfloor(num) == %ld\n", floor_func(num));
        printf("\tciel(num) == %ld\n", ciel_func(num));
    }

    return 0;
}

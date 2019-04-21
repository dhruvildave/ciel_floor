
#include "ciel_floor.h"
#include <stdio.h>
#define MAXLEN 25

int main(void) {
    char num[MAXLEN];

    while (read_num(num, MAXLEN) > 0) {
        printf("\tnum == %s", num);
        printf("\tfloor(num) == %ld\n", floor_func(num));
        printf("\tciel(num) == %ld\n", ciel_func(num));
    }

    return 0;
}

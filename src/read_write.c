
#include "pch.h"
#include <ctype.h>

int read_num(char s[], int lim) {
    int i = 0, c = 0;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        if (isdigit(c) || c == '.' || c == '-') {
            s[i] = c;
        } else {
            s[i] = '\0';
        }
    }

    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';
    return i;
}

int check_sign(const char str[]) {
    if (str[0] == '-') {
        return -1; // negative number
    }

    return 1; // positive number
}

long write_num(char s[]) {
    long num = 0;
    int sign = check_sign(s);
    int i = 0;

    if (sign == -1) {
        i = 1;
    } else {
        i = 0;
    }

    int flag = 1;
    while (s[i] != '\0') {
        if (s[i] == '.' || s[i] == '\n') {
            flag = 0;
        }

        if (flag && isdigit(s[i])) {
            num *= 10;
            num += (s[i] - '0');
        }

        ++i;
    }

    return num * sign;
}

int is_integer(const char s[]) {
    int i = 0;

    for (i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '.') {
            return 0;
        }
    }

    return 1;
}

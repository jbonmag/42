#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include "ft.h"

int is_number(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

long long ft_atoi(const char *str) {
    long long result = 0;
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

char *ft_strdup(const char *s1) {
    char *s2;
    size_t len = strlen(s1) + 1;
    s2 = malloc(len);
    if (s2 == NULL) return NULL;
    memcpy(s2, s1, len);
    return s2;
}

void ft_putstr(const char *str) {
    while (*str) {
        write(1, str++, 1);
    }
}

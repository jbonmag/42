#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *ft_strdup(char *src)
{
    int i;
    int len;
    char *dst;

    len = 0;
    while (src[len] != '\0')
        len++;
    dst = (char *)malloc(len + 1);
    if (!dst)
        return (NULL); // Retorna NULL si malloc falla
    i = 0;
    while (i < len)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

long long ft_atoi(const char *str)
{
    long long res;
    int negative;

    negative = 1;
    res = 0;
    while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
                    *str == '\v' || *str == '\f' || *str == '\r'))
        ++str;
    if (*str == '-')
        negative = -1;
    if (*str == '-' || *str == '+')
        ++str;
    while (*str && *str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');  // Convertir char a int
        ++str;
    }
    return (res * negative);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

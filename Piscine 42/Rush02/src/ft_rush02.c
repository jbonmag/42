#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *ft_getnb(int fd)
{
    int i;
    char c[1];
    char *str;

    str = (char *)malloc(128);
    if (!str)
        return (NULL); // Error en la asignación de memoria

    i = 0;
    read(fd, c, 1);
    while (c[0] == '\n')
        read(fd, c, 1);
    while (c[0] >= '0' && c[0] <= '9')
    {
        str[i++] = c[0];
        read(fd, c, 1);
    }
    str[i] = '\0';
    return (str);
}

char *ft_getval(int fd, char *c)
{
    int i;
    char *str;

    str = (char *)malloc(128);
    if (!str)
        return (NULL); // Error en la asignación de memoria

    i = 0;
    while (c[0] != '\n')
    {
        str[i++] = c[0];
        if (read(fd, c, 1) <= 0) // Leer carácter por carácter
        {
            free(str);
            return (NULL); // Error en la lectura
        }
    }
    str[i] = '\0';
    return (str);
}

t_list *process(char *file)
{
    int i;
    int fd;
    char c[1];
    t_list *tab;
    char *tmp;

    fd = open(file, O_RDONLY);
    if (fd == -1)
        return (NULL); // Error al abrir el archivo

    tab = (t_list *)malloc(sizeof(t_list) * 33);
    if (!tab)
    {
        close(fd);
        return (NULL); // Error en la asignación de memoria
    }

    i = 0;
    while (i < 32)
    {
        char *nb_str = ft_getnb(fd);
        if (!nb_str)
        {
            close(fd);
            free(tab);
            return (NULL); // Error en la asignación de memoria
        }

        tab[i].nb = ft_atoi(nb_str);
        free(nb_str);

        if (read(fd, c, 1) <= 0)
        {
            close(fd);
            free(tab);
            return (NULL); // Error de lectura
        }
        while (c[0] == ' ')
            if (read(fd, c, 1) <= 0)
            {
                close(fd);
                free(tab);
                return (NULL); // Error de lectura
            }
        if (c[0] == ':')
            if (read(fd, c, 1) <= 0)
            {
                close(fd);
                free(tab);
                return (NULL); // Error de lectura
            }
        while (c[0] == ' ')
            if (read(fd, c, 1) <= 0)
            {
                close(fd);
                free(tab);
                return (NULL); // Error de lectura
            }

        tmp = ft_getval(fd, c);
        if (!tmp)
        {
            close(fd);
            free(tab);
            return (NULL); // Error en la asignación de memoria
        }
        tab[i].val = ft_strdup(tmp);
        free(tmp);
        if (!tab[i].val)
        {
            close(fd);
            free(tab);
            return (NULL); // Error en la asignación de memoria
        }
        i++;
    }
    close(fd);
    return (tab);
}

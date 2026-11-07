#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int getdec(long long nb)
{
    if (nb >= 90)
        return (90);
    else if (nb >= 80)
        return (80);
    else if (nb >= 70)
        return (70);
    else if (nb >= 60)
        return (60);
    else if (nb >= 50)
        return (50);
    else if (nb >= 40)
        return (40);
    else if (nb >= 30)
        return (30);
    else if (nb >= 20)
        return (20);
    else
        return (nb);
}

long long getmult(long long nb)
{
    const long long billion = 1000000000LL;
    const long long million = 1000000LL;
    const long long thousand = 1000LL;
    const long long hundred = 100LL;

    if (nb >= billion * billion)  // Esto es 10^18
        return billion * billion;
    else if (nb >= billion)       // Esto es 10^9
        return billion;
    else if (nb >= million)       // Esto es 10^6
        return million;
    else if (nb >= thousand)      // Esto es 10^3
        return thousand;
    else if (nb >= hundred)       // Esto es 10^2
        return hundred;
    else
        return getdec(nb);
}

void ft_print(long long n, t_list *tab, int *first)
{
    int i;
    long long mult;

    i = 0;
    mult = getmult(n);
    if (mult >= 100)
        ft_print(n / mult, tab, first);

    // No imprimir un espacio antes de la primera palabra
    if (*first == 0)
        write(1, " ", 1);
    *first = 0;

    while (tab[i].nb != mult && i < 32) // Limita la búsqueda a 32 elementos
        i++;

    // Asegúrate de que la palabra correspondiente existe
    if (i < 32)
    {
        ft_putstr(tab[i].val);
    }

    // Imprime el resto
    if (mult != 0 && n % mult != 0)
        ft_print(n % mult, tab, first);
}

int main(int ac, char **av)
{
    t_list *tab;
    int first;

    first = 1;
    if (ac == 2)
    {
        if (ft_atoi(av[1]) < 0)
        {
            write(1, "Error\n", 6);
            return (0);
        }
        tab = process("numbers.dict");  // Cambia aquí el nombre del archivo
        if (!tab)
        {
            write(1, "Memory allocation error\n", 24);
            return (0);
        }
        ft_print(ft_atoi(av[1]), tab, &first);
        free(tab);
    }
    return (0);
}

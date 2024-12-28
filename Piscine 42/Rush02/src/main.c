#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft.h"

void process_input(int ac, char **av) {
    t_list *entries;
    char *value;
    long long num;
    int count;

    if (ac < 2 || ac > 3) {
        ft_putstr("Error\n");
        return;
    }

    // Verifica y maneja el diccionario
    if (ac == 3) {
        entries = process(av[1]);
        if (!entries) {
            ft_putstr("Dict Error\n");
            return;
        }
        count = MAX_ENTRIES;
    } else {
        entries = process("numbers.dict");
        if (!entries) {
            ft_putstr("Dict Error\n");
            return;
        }
        count = MAX_ENTRIES;
    }

    if (!is_number(av[ac - 1])) {
        ft_putstr("Error\n");
        free_entries(entries);
        return;
    }

    num = ft_atoi(av[ac - 1]);
    value = getdec(num, entries);
    if (value) {
        ft_putstr(value);
        free(value);
    } else {
        ft_putstr("Dict Error\n");
    }

    free_entries(entries);
}

int main(int ac, char **av) {
    process_input(ac, av);
    return 0;
}

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line_bonus.h"

int main(int argc, char **argv)
{
    int *fds;
    int i;
    char **lines;
    int files_left;
    
    if (argc < 2)
    {
        fprintf(stderr, "Uso: %s archivo1 [archivo2 ...]\n", argv[0]);
        return (1);
    }
    
    /* Se reserva un arreglo para almacenar los fds */
    fds = malloc(sizeof(int) * (argc - 1));
    if (!fds)
        return (1);
    
    /* Se abren los archivos */
    for (i = 0; i < argc - 1; i++)
    {
        fds[i] = open(argv[i + 1], O_RDONLY);
        if (fds[i] < 0)
        {
            perror(argv[i + 1]);
            /* Se pueden cerrar los ya abiertos y liberar la memoria */
            while (i-- > 0)
                close(fds[i]);
            free(fds);
            return (1);
        }
    }
    
    /* Se reserva un arreglo para almacenar las líneas leídas de cada archivo */
    lines = malloc(sizeof(char *) * (argc - 1));
    if (!lines)
    {
        for (i = 0; i < argc - 1; i++)
            close(fds[i]);
        free(fds);
        return (1);
    }
    
    /* Bandera para saber si aún queda algún archivo con líneas por leer */
    files_left = argc - 1;
    
    /* Se lee de forma intercalada de cada archivo hasta que todos se hayan terminado */
    while (files_left > 0)
    {
        for (i = 0; i < argc - 1; i++)
        {
            lines[i] = get_next_line(fds[i]);
            if (lines[i])
            {
                printf("Archivo %s: %s", argv[i + 1], lines[i]);
                free(lines[i]);
            }
            else if (fds[i] != -1)
            {
                /* Si ya no hay líneas, cerramos el fd y marcamos que ya no queda nada */
                close(fds[i]);
                fds[i] = -1;
                files_left--;
            }
        }
    }
    
    free(lines);
    free(fds);
    return (0);
}


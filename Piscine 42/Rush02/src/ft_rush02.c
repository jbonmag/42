#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include "ft.h"

#define MAX_ENTRIES 1000  // Ajusta este valor según tus necesidades

void free_entries(t_list *entries) {
    // Suponiendo que entries es un array de t_list
    // y cada elemento tiene un campo 'val' que debe ser liberado.
    if (entries) {
        for (int i = 0; i < MAX_ENTRIES; i++) {
            if (entries[i].val) {
                free(entries[i].val);
            }
        }
        free(entries);
    }
}

char *getdec(long long nb, t_list *entries) {
    // Implementa la conversión del número en palabras aquí
    // Esta es una implementación ficticia.
    // Deberás ajustar esta función según el formato de tu diccionario.
    for (int i = 0; i < MAX_ENTRIES; i++) {
        if (entries[i].nb == nb) {
            return ft_strdup(entries[i].val);
        }
    }
    return NULL;
}

t_list *process(const char *filename) {
    // Implementa la carga y procesamiento del diccionario aquí
    // Esta es una implementación ficticia.
    // Deberás ajustar esta función para leer el archivo y llenar el array de t_list.
    t_list *entries = malloc(MAX_ENTRIES * sizeof(t_list));
    if (!entries) return NULL;
    // Lógica para leer el archivo y llenar entries
    return entries;
}

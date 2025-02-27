/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 22:49:54 by jubonet-          #+#    #+#             */
/*   Updated: 2025/02/11 23:05:04 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int num = 42;
    unsigned int u_num = 3000000000;
    char c = 'A';
    char *str = "Hola, mundo!";
    void *ptr = &num;

    // Pruebas de caracteres y strings
    ft_printf("Carácter: %c\n", c);
    printf("Carácter (printf): %c\n\n", c);

    ft_printf("Cadena: %s\n", str);
    printf("Cadena (printf): %s\n\n", str);

    // Pruebas de punteros
    ft_printf("Puntero: %p\n", ptr);
    printf("Puntero (printf): %p\n\n", ptr);

    // Pruebas de números enteros con signo
    ft_printf("Número decimal (%%d): %d\n", num);
    printf("Número decimal (%%d) (printf): %d\n\n", num);

    ft_printf("Número entero (%%i): %i\n", num);
    printf("Número entero (%%i) (printf): %i\n\n", num);

    // Pruebas de números sin signo
    ft_printf("Número sin signo (%%u): %u\n", u_num);
    printf("Número sin signo (%%u) (printf): %u\n\n", u_num);

    // Pruebas de números hexadecimales
    ft_printf("Número hexadecimal minúsculas (%%x): %x\n", num);
    printf("Número hexadecimal minúsculas (%%x) (printf): %x\n\n", num);

    ft_printf("Número hexadecimal mayúsculas (%%X): %X\n", num);
    printf("Número hexadecimal mayúsculas (%%X) (printf): %X\n\n", num);

    // Prueba del carácter '%'
    ft_printf("Porcentaje: %%\n");
    printf("Porcentaje (printf): %%\n\n");

    return 0;
}

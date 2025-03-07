/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 22:49:54 by jubonet-          #+#    #+#             */
/*   Updated: 2025/03/02 18:31:22 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
    char test_str[10] = "hola%";
    int ret1, ret2;

    ret1 = ft_printf("Hola %s!\n", "mundo");
    ret2 = printf("Hola %s!\n", "mundo");
    printf("ft_printf: %d caracteres, printf: %d caracteres\n\n", ret1, ret2);

    ret1 = ft_printf("Numero: %d\n", 42);
    ret2 = printf("Numero: %d\n", 42);
    printf("ft_printf: %d caracteres, printf: %d caracteres\n\n", ret1, ret2);

    ret1 = ft_printf("Hexadecimal: %x\n", 255);
    ret2 = printf("Hexadecimal: %x\n", 255);
    printf("ft_printf: %d caracteres, printf: %d caracteres\n\n", ret1, ret2);

    void *ptr = &ret1;
    ret1 = ft_printf("Puntero: %p\n", ptr);
    ret2 = printf("Puntero: %p\n", ptr);
    printf("ft_printf: %d caracteres, printf: %d caracteres\n\n", ret1, ret2);

    ret1 = ft_printf("Porcentaje: %%\n");
    ret2 = printf("Porcentaje: %%\n");
    printf("ft_printf: %d caracteres, printf: %d caracteres\n\n", ret1, ret2);

    //Evitamos pasar NULL a printf("%s", NULL)
    if (NULL == (char *)NULL)
        ret2 = printf("Cadena NULL: (null)\n");
    else
        ret2 = printf("Cadena NULL: %s\n", (char *)NULL);
    
    ret1 = ft_printf("Cadena NULL: %s\n", (char *)NULL);
    printf("ft_printf: %d caracteres, printf: %d caracteres\n\n", ret1, ret2);

    ret1 = ft_printf("Especificador invalido: %%k\n");
    ret2 = printf("Especificador invalido: %%k\n");
    printf("ft_printf: %d caracteres, printf: %d caracteres\n\n", ret1, ret2);

    ret1 = ft_printf("Caracteres especiales: <¨´¬$&>\n");
    ret2 = printf("Caracteres especiales: <¨´¬>$&\n");
    printf("ft_printf: %d caracteres, printf: %d caracteres\n\n", ret1, ret2);
    printf("Salida ft_printf:\n");
    printf("%i\n", ft_printf(test_str));
    ft_printf("%s\n", test_str);

    printf("Salida printf:\n");
    printf("%i\n", printf("%s", test_str));
    printf("%s\n", test_str);


    return (0);
}

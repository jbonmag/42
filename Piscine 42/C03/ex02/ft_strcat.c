/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:07:06 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/23 12:37:40 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <stdio.h>

int main() {

    char test1_dest[50] = "Hola";
    char test1_src[] = "";
    ft_strcat(test1_dest, test1_src);
    printf("Test 1 - Resultado: %s\n", test1_dest);
   
    char test2_dest[50] = "Hola, ";
    char test2_src[] = "mundo!";
    ft_strcat(test2_dest, test2_src);
    printf("Test 2 - Resultado: %s\n", test2_dest);

    char test3_dest[50] = "";
    char test3_src[] = "¡Bienvenido!";
    ft_strcat(test3_dest, test3_src);
    printf("Test 3 - Resultado: %s\n", test3_dest);

    char test4_dest[100] = "Esta es una cadena larga, ";
    char test4_src[] = "y esta es otra cadena que también es bastante larga.";
    ft_strcat(test4_dest, test4_src);
    printf("Test 4 - Resultado: %s\n", test4_dest);

    char test5_dest[50] = "Hello ";
    char test5_src[] = "123!@#";
    ft_strcat(test5_dest, test5_src);
    printf("Test 5 - Resultado: %s\n", test5_dest);

    return (0);
}*/

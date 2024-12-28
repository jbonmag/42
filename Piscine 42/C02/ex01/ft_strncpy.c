/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:44:21 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/17 15:06:29 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{	
	char src[] = "En un lugar de la mancha, cuyo nombre no quiero acordarme...";
	char	dest[100];
	ft_strncpy(dest, src, 5);
	printf("Cadena copiada (primeros 5 caracteres): %s\n", dest);
	ft_strncpy(dest, src, 15);
	printf("Cadena copiada (primeros 15 caracteres): %s\n", dest);
	ft_strncpy(dest, src, sizeof(dest) - 1);
	dest[sizeof(dest) - 1] = '\0';
	printf("Cadena copiada completa: %s\n", dest);
	return (0);
}*/

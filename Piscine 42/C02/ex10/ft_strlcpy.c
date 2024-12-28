/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:03:15 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/20 10:25:09 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size)
	{
		while (i < (size - 1) && len && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (len);
}

/*#include <stdio.h>

int	main()
{
	char dest[50];
	char src[] = "este comando es la opcion mas segura";

	printf("src : %s\n", src);
	printf("size src: %d\n", ft_strlcpy(dest, src, 5));
	printf("dest : %s", dest); 
}*/

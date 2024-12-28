/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:34:51 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/23 18:23:55 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (src_len);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
#include <stdio.h>

int	main(void)
{
	char dest[8] = "Hello, ";
	char src[] = "world!";
	unsigned int size = 8;

    printf("Antes de la concatenacion: '%s'\n", dest);
    unsigned int total_length = ft_strlcat(dest, src, size);
    printf("Despues de la concatenacion: '%s'\n", dest);
    printf("Largo total: %u\n", total_length);

    return (0);
}

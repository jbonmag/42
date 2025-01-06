/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:07:37 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/06 21:28:42 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The  memset() function  fills the first n bytes of the memory area 
pointed to by s with the constant byte c.

RETURN VALUE
The memset() function returns a pointer to the memory area s.
*/

#include <string.h>

void	*memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*ptr = (unsigned char)c;
		ptr++;
		i++;
	}
	return (s);
}

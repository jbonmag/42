/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:10:36 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/06 21:44:38 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_memchr(const char *s, int c, size_t n)
{
	size_t	i;
	
	while (n-- > 0)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

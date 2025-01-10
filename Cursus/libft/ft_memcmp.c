/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:10:47 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/06 21:45:09 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n && *d == *s)
	{
		++d;
		++s;
		--n;
	}
	if (n)
		return (*d - *s);
	else
		return (0);
}

/*int main()
{
	char	str[] = "Hola i adeu";
	char	str1[] = "Bon dia i bona nit";
	ft_putnbr_fd(ft_memcmp(str, str1, 5), 1);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:08:10 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/06 14:14:50 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap.
RETURN VALUE
The memcpy() function returns a pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == '\0' && src == '\0')
		return ('\0');
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

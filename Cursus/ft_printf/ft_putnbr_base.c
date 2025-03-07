/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 00:18:13 by jubonet-          #+#    #+#             */
/*   Updated: 2025/02/12 00:18:18 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*(str++))
		len++;
	return (len);
}

int	ft_putnbr_base(unsigned long long int nbr, const char *base)
{
	int				count;
	unsigned int	base_len;

	count = 0;
	base_len = ft_strlen(base);
	if (nbr >= base_len)
	{
		count += ft_putnbr_base(nbr / base_len, base);
		count += ft_putchar_fd(base[nbr % base_len], 1);
	}
	else
	{
		count += ft_putchar_fd(base[nbr], 1);
	}
	return (count);
}

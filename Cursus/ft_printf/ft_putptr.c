/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 00:18:44 by jubonet-          #+#    #+#             */
/*   Updated: 2025/02/12 00:18:53 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int		count;

	if (!ptr)
	{
		count = 0;
		count += ft_putstr("(nil)");
		return (count);
	}
	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbr_base((unsigned long long)ptr, "0123456789abcdef");
	return (count);
}

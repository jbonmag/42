/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 00:26:03 by jubonet-          #+#    #+#             */
/*   Updated: 2025/02/12 00:26:25 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int		count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putunsigned(n / 10);
		count += ft_putchar_fd(n % 10 + '0', 1);
	}
	else
	{
		count += ft_putchar_fd(n + '0', 1);
	}
	return (count);
}

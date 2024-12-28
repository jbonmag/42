/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:44:35 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/23 19:30:35 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

/*int	main()
{
	int	nb = 42;
	ft_putnbr(nb);

	return (0);
}*/

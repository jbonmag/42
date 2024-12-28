/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:21:43 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/21 12:55:50 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	a;

	if (nb < 0)
	{
		return (0);
	}
	a = 1;
	while (a * a < nb)
	{
		++a;
	}
	if (nb == (a * a))
	{
		return (a);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(625));
	printf("%d\n", ft_sqrt(1000000));
	return (0);
}*/

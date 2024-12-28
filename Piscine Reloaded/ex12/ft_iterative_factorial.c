/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 09:58:15 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/21 10:46:04 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	morenauer;

	i = 1;
	morenauer = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		morenauer *= i;
		i++;
	}
	return (morenauer);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(-4));
	return (0);
}*/

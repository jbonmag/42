/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:51:13 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/16 17:20:36 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	num1;
	int	num2;

	num1 = 17;
	num2 = 3;
	printf("Valor inicial de num1: %d\n", num1);
	printf("Valor inicial de num2: %d\n", num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("Valor final de num1 (resultado división): %d\n", num1);
	printf("Valor final de num2 (resto división): %d\n", num2);
	return (0);
}*/

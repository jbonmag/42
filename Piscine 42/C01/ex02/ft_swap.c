/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:49:41 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/11 10:53:28 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 20;
	printf("Valor inicial de num1: %d\n", num1);
	printf("Valor inicial de num2: %d\n", num2);

	ft_swap(&num1, &num2);
	printf("Valor final de num1: %d\n", num1);
	printf("Valor final de num2: %d\n", num2);
	return (0);
}*/

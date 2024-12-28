/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:50:20 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/11 11:10:02 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	num1;
	int	num2;
	int	div_result;
	int	mod_result;

	num1 = 17;
	num2 = 3;
	printf("Valor de a: %d\n", num1);
	printf("Valor de b: %d\n", num2);
	ft_div_mod(num1, num2, &div_result, &mod_result);
	printf("División: %d\n", div_result);
	printf("Módulo: %d\n", mod_result);
	return (0);
}*/

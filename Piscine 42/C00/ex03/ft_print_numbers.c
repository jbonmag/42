/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:34:27 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/10 15:18:08 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Función (óle ahí esos acentos en mac) ft_print_numbers
void	ft_print_numbers(void)
{
	char	digitos;

	digitos = '0';
	while (digitos <= '9')
	{
		write(1, &digitos, 1);
		digitos++;
	}
	write(1, "\n", 1);
}

// Función main para probar ft_print_numbers
/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

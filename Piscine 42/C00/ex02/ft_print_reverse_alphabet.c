/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:22:23 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/09 09:39:24 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Definición de la función ft_print_reverse_alphabet
void	ft_print_reverse_alphabet(void)
{
	char	letra;	

	letra = 'z';
	while (letra >= 'a')
	{
		write(1, &letra, 1);
		letra--;
	}
}

// Función main para probar ft_print_reverse_alphabet
/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/

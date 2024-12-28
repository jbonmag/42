/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:41:51 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/23 19:04:18 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

/*#include <stdio.h>

int	main()
{
	char	text[] = "Ola k ase";

	printf("Número de caracteres: %d\n", ft_strlen(text));

	return (0);
}*/

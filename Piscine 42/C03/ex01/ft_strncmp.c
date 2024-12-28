/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:03:32 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/23 12:36:15 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp ("A tope con la cope", "A tope", 18));
	printf("%d\n", ft_strncmp ("12345", "12345", 5));
	printf("%d\n", ft_strncmp ("1234", "12345", 5));
	printf("%d\n", ft_strncmp ("12345", "1234", 5));
	printf("%d\n", ft_strncmp ("1234", "12345", 4));
}*/

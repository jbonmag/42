/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:35:15 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/23 12:33:18 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("Ola k ase", "Ola k ase"));
	printf("%d\n", ft_strcmp("123", "123"));
	printf("%d\n", ft_strcmp("Meliades", "Mel"));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp(" ", ""));
	printf("%d\n", ft_strcmp("~", "~"));
}*/

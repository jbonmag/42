/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:46:00 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/20 19:24:53 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	*test1 = "Aut vinCere auT mOri";
	char	*test2 = "1HelloKitty123";
	char	*test3 = "Letrasnamas";
	char	*test4 = "";
	
	printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_alpha(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_alpha(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_alpha(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_alpha(test4));
	
	return (0);
}*/

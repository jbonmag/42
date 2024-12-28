/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:01:25 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/23 13:15:27 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	char	text[] = "Ese toro enamorado de la luna...!~@123";
	char	find[] = "";
	char	*result = ft_strstr(text, find);
	char	*result2 = strstr(text, find);

	printf("OUTPUT: %s\n", result);
	printf("ORIGINAL: %s\n", result2);

	return (0);
}*/

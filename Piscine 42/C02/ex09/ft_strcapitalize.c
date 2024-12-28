/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:12:54 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/20 19:42:24 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	return (ft_is_lowercase(c) || ft_is_upercase(c) || ft_is_number(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_alpha(str[i - 1]) && ft_is_lowercase(str[i]))
			str[i] -= 32;
		else if (ft_is_alpha(str[i - 1]) && ft_is_upercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int     main()
{
        char    text[] = "salut,tu vas ? 42mots quarante-deux; cinquante+et+un";
        printf("ANTES: %s\n", text);      
        ft_strcapitalize(text);
        printf("DESPUÉS: %s", text);
}*/

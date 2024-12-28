/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 11:06:00 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/23 11:36:23 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = ft_strlen(src);
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
    char *original = "Hola Universo";
    char *duplicada = ft_strdup(original);

    if (duplicada == NULL)
    {
        printf("Error de asignación de memoria\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Duplicada: %s\n", duplicada);

    free(duplicada);

    return 0;
}*/

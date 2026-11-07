/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 00:28:53 by jubonet-          #+#    #+#             */
/*   Updated: 2025/03/04 00:52:42 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*
** Devuelve la longitud de la cadena 's'. Si 's' es NULL, devuelve 0.
*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

/*
** Busca el carácter 'c' en la cadena 's'. Devuelve un puntero a su primera
** aparición, o NULL si no está. Si 's' es NULL, devuelve NULL.
** Si 'c' es '\0', devuelve un puntero al final de 's'.
*/
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*
** Concatena 's2' al final de 's1' en un bloque nuevo y libera 's1'
** (el 'stash' anterior), para no perder memoria al ir leyendo.
** Si 's1' es NULL, se toma como cadena vacía.
** Devuelve la concatenación, o NULL si falla malloc ('s1' queda liberado).
*/
char	*ft_strjoin(char *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
	{
		free(s1);
		return (NULL);
	}
	i = 0;
	while (s1 && s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	free(s1);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 00:25:56 by jubonet-          #+#    #+#             */
/*   Updated: 2025/03/04 00:38:11 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** Devuelve la longitud de la cadena 's'.
** Si 's' es NULL, retorna 0.
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
** Busca el carácter 'c' en la cadena 's'.
** Retorna un puntero a la primera aparición de 'c' en 's'
** o NULL si no se encuentra.
**
** Si 's' es NULL, retorna NULL.
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
	/*
	** Si el carácter buscado es '\0',
	** devolvemos un puntero al final de 's'.
	*/
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*
** Concatena la cadena s2 al final de s1, creando
** un nuevo bloque de memoria con malloc y devolviéndolo.
** El que llame a esta función deberá liberar el string resultante.
**
** - Si s1 es NULL, se toma como cadena vacía.
** - Si s2 es NULL, se toma como cadena vacía.
** - Si todo va bien, retorna la concatenación de ambas.
** - Si falla el malloc, retorna NULL.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	/* Si s1 o s2 son NULL, tratarlos como "" */
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);

	/* Copiar s1 en dest */
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	/* Continuar con s2 */
	j = 0;
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';

	return (dest);
}


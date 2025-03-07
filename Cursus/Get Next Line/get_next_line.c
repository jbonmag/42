/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 00:27:17 by jubonet-          #+#    #+#             */
/*   Updated: 2025/03/04 00:27:33 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** Lee del file descriptor 'fd' y actualiza 'stash'.
** Devuelve la nueva versión de 'stash'.
*/
static char	*read_and_stash(int fd, char *stash)
{
	char	*buf;
	ssize_t	bytes_read;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(stash, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		if (bytes_read > 0)
		{
			/* Unir lo leído a stash */
			stash = ft_strjoin(stash, buf);
			if (!stash)
				break ;
		}
	}
	free(buf);
	return (stash);
}

/*
** Extrae la línea (con todo y \n si existe) del stash.
** Retorna la línea lista para usarse (o NULL si no hay nada).
*/
static char	*extract_line(char *stash)
{
	char	*line;
	size_t	i;

	if (!stash || stash[0] == '\0')
		return (NULL);
	i = 0;
	/* Avanzamos hasta encontrar '\n' o fin de stash */
	while (stash[i] && stash[i] != '\n')
		i++;
	/*
	** Reservamos memoria para la línea.
	** Incluimos el salto de línea si está presente.
	*/
	line = (char *)malloc(sizeof(char) * (i + (stash[i] == '\n') + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	/* Si encontramos un salto de línea, lo copiamos también. */
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

/*
** Elimina del 'stash' la parte que ya se devolvió en 'line'.
** Retorna el nuevo 'stash' reducido.
*/
static char	*clean_stash(char *stash)
{
	char	*new_stash;
	size_t	i;
	size_t	j;

	if (!stash)
		return (NULL);
	i = 0;
	/* Avanzar hasta el \n si existe */
	while (stash[i] && stash[i] != '\n')
		i++;
	/* Si llegamos al final (no se encontró \n), liberar y retornar NULL */
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	/* De lo contrario, saltamos el '\n' */
	i++;
	new_stash = (char *)malloc(sizeof(char) * (ft_strlen(stash + i) + 1));
	if (!new_stash)
		return (NULL);
	j = 0;
	while (stash[i])
		new_stash[j++] = stash[i++];
	new_stash[j] = '\0';
	free(stash);
	return (new_stash);
}

/*
** Función principal: devuelve una línea leída de 'fd'.
*/
char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_and_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = clean_stash(stash);
	return (line);
}


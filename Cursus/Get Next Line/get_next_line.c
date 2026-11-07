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
** Libera 'ptr' y devuelve NULL, para poder cortar en una sola línea.
*/
static char	*free_null(char *ptr)
{
	free(ptr);
	return (NULL);
}

/*
** Lee del file descriptor 'fd' y añade lo leído a 'stash' hasta que
** 'stash' contenga un '\n' o se llegue al final del archivo.
** Si read falla, libera 'stash' y devuelve NULL.
*/
static char	*read_and_stash(int fd, char *stash)
{
	char	*buf;
	ssize_t	bytes_read;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (free_null(stash));
	bytes_read = 1;
	while (!ft_strchr(stash, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buf);
			free(stash);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		if (bytes_read > 0)
			stash = ft_strjoin(stash, buf);
		if (!stash)
			break ;
	}
	free(buf);
	return (stash);
}

/*
** Extrae la línea (incluido el '\n' si existe) del principio de 'stash'.
** Devuelve la línea lista para usarse, o NULL si no queda nada.
*/
static char	*extract_line(char *stash)
{
	char	*line;
	size_t	len;
	size_t	i;

	if (!stash || stash[0] == '\0')
		return (NULL);
	len = 0;
	while (stash[len] && stash[len] != '\n')
		len++;
	if (stash[len] == '\n')
		len++;
	line = (char *)malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (i < len)
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

/*
** Elimina de 'stash' la parte que ya se devolvió en la línea.
** Devuelve el nuevo 'stash' reducido, o NULL si no queda nada.
*/
static char	*clean_stash(char *stash)
{
	char	*new_stash;
	size_t	i;
	size_t	j;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
		return (free_null(stash));
	i++;
	new_stash = (char *)malloc(sizeof(char) * (ft_strlen(stash + i) + 1));
	if (!new_stash)
		return (free_null(stash));
	j = 0;
	while (stash[i])
		new_stash[j++] = stash[i++];
	new_stash[j] = '\0';
	free(stash);
	return (new_stash);
}

/*
** Devuelve la siguiente línea leída de 'fd', o NULL al final o si hay error.
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
	if (!line)
	{
		stash = free_null(stash);
		return (NULL);
	}
	stash = clean_stash(stash);
	return (line);
}

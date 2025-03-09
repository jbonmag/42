/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 00:28:53 by jubonet-          #+#    #+#             */
/*   Updated: 2025/03/08 00:47:24 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int total;
    char *res;

    total = ft_strlen(s1) + ft_strlen(s2);
    res = malloc(sizeof(char) * (total + 1));
    if (!res || !s1 || !s2)
        return (NULL);
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    while (s2[j])
        res[i++] = s2[j++];
    res[total] = 0;
    return (res);
}

char    *ft_strchr(const char *string, int searchedChar)
{
    while (*string && *string != (char)searchedChar)
        string++;
    if (*string == (char)searchedChar)
        return ((char *)string);
    return (NULL);
}

void    ft_bzero(void *s, size_t n)
{
    char    *str = (char *)s;
    size_t  i = 0;

    while (i < n)
        str[i++] = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

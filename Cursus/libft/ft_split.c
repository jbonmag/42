/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:20:40 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/14 15:44:05 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*word_dup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**free_split(char **split, int j)
{
	while (j > 0)
		free(split[--j]);
	free(split);
	return (NULL);
}

static char	**process_split(const char *s, char c, char **split, int *params)
{
	if (s[params[0]] != c && params[2] == -1)
		params[2] = params[0];
	if ((s[params[0]] == c || s[params[0] + 1] == '\0') && params[2] != -1)
	{
		if (s[params[0]] == c || s[params[0] + 1] == '\0')
		{
			if (s[params[0] + 1] == '\0' && s[params[0]] != c)
				split[params[1]] = word_dup(s, params[2], params[0] + 1);
			else
				split[params[1]] = word_dup(s, params[2], params[0]);
			if (!split[params[1]++])
				return (free_split(split, params[1] - 1));
		}
		params[2] = -1;
	}
	return (split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		params[3];

	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	params[0] = 0;
	params[1] = 0;
	params[2] = -1;
	while (s[params[0]])
	{
		split = process_split(s, c, split, params);
		if (!split)
			return (NULL);
		params[0]++;
	}
	split[params[1]] = NULL;
	return (split);
}

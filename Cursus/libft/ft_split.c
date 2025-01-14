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

static void	ft_initiate_vars(size_t *i, int *j, int *s_word)
{
	*i = 0;
	*j = 0;
	*s_word = -1;
}

static void	*ft_free(char **str_array, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
	return (NULL);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static int	ft_word_count(const char *str, char splitter)
{
	int	count;
	int	word_start;

	count = 0;
	word_start = 0;
	while (*str)
	{
		if (*str != splitter && word_start == 0)
		{
			word_start = 1;
			count++;
		}
		else if (*str == splitter)
			word_start = 0;
		str++;
	}
	return (count);
}

char	**ft_split(const char *str, char splitter)
{
	char	**str_array;
	size_t	i;
	int		j;
	int		word_start;

	ft_initiate_vars(&i, &j, &word_start);
	str_array = ft_calloc((ft_word_count(str, splitter) + 1), sizeof(char *));
	if (!str_array)
		return (NULL);
	while (i <= ft_strlen(str))
	{
		if (str[i] != splitter && word_start < 0)
			word_start = i;
		else if ((str[i] == splitter || i == ft_strlen(str)) && word_start >= 0)
		{
			str_array[j] = fill_word(str, word_start, i);
			if (!(str_array[j]))
				return (ft_free(str_array, j));
			word_start = -1;
			j++;
		}
		i++;
	}
	return (str_array);
}

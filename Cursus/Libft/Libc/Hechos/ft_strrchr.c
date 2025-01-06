/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:09:53 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/06 21:42:07 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen(s);
    while (len >= 0)
    {
        if (s[len] == (char)c)
            return ((char *)s + len);
        len--;
    }
    return (NULL);
}


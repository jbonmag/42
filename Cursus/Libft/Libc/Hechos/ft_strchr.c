/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:09:34 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/06 21:41:27 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c) // Reinterpretamos c como char aquí
            return ((char *)s);
        s++;
    }

    if (c == '\\0') // Si c es NULL ('\\0')
        return ((char *)s);

    return NULL; // Usamos NULL para indicar ausencia
}

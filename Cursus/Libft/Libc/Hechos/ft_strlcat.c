/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:08:50 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/06 21:39:32 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  // Asegúrate de incluir tu archivo de cabecera
#include <stddef.h> // Para size_t

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t len_dst;
    size_t len_src;
    size_t i;

    // Calcular longitud actual del destino (len_dst)
    len_dst = 0;
    while (len_dst < dstsize && dst[len_dst] != '\\0')
        len_dst++;

    // Calcular longitud del origen (len_src)
    len_src = 0;
    while (src[len_src] != '\\0')
        len_src++;

    if (len_dst >= dstsize)
        return (dstsize + len_src);

    // Añadir hasta donde haya capacidad
    i = 0;

	// Concatenar hasta el tamaño máximo permitido
	while ((i < dstsize - len_dst - 1) && src[i] != '\\0') {
        dst[len_dst + i] = src[i];
        i++;
	}

	// Asegurarse de terminar con null character
	dst[len_dst + i] = '\\0';

	return (len_dst + len_src);
}


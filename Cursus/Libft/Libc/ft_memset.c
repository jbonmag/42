/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:07:37 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/27 17:07:39 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The  memset() function  fills the first n bytes of the memory area 
pointed to by s with the constant byte c.

RETURN VALUE
The memset() function returns a pointer to the memory area s.
*/

#include <string.h>

void *memset(void *s, int c, size_t n);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:06:39 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/27 17:06:40 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
checks whether c is a 7-bit unsigned char value 
that fits into the ASCII character set.
RETURN VALUE
The values returned are nonzero if the character c 
falls into the tested class, and zero if not.
*/

int		ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:06:19 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/27 17:06:20 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
checks for an alphanumeric character; it is equivalent 
to (isalpha(c) || isdigit(c)).
RETURN VALUE
The  values  returned  are  nonzero  if  the character c 
falls into the tested class, and zero if not.
*/
//#include <libft.h>

int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}
//las condiciones en un return hacen que se evaluan 
//directamente si una de las condiciones es verdadera o falsa
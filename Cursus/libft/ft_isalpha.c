/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:04:07 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/10 17:42:09 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
/*int main(void)
{
	char c, result;

    c = -1;
 	  result = ft_isalpha(c);
    printf("El resultado es %d\n", result);

    c = 'g';
  	result = ft_isalpha(c);
    printf("El resultado es %d\n", result);

    c = '+';
  	result = ft_isalpha(c);
    printf("El resultado es %d\n", result);

  	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:05:49 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/10 15:11:26 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*checks for a digit (0 through 9).*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

/*int     main(void)
{
    int    c;
    int    result;


    c = '0';
    result = ft_isdigit(c);
    printf("Comete un %d\n", result);

    c = '7';
    result = ft_isdigit(c);
    printf("Comete un %d\n", result);

    c = 'g';
    result = ft_isdigit(c);
    printf("Comete un %d\n", result);

    c = '*';
    result = ft_isdigit(c);
    printf("Comete un %d\n", result);

    return (0);
}*/

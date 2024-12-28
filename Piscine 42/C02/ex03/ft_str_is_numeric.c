/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:46:28 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/20 15:17:08 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int    main(void)
{
    int is_numeric;
    char a[] = "abc";
    char b[] = "99";
    char c[] = "";
    char d[] = "dhd326632";
    is_numeric = ft_str_is_numeric(a);
    printf("%d\n", is_numeric);
    is_numeric = ft_str_is_numeric(b);
    printf("%d\n", is_numeric);
    is_numeric = ft_str_is_numeric(c);
    printf("%d\n", is_numeric);
    is_numeric = ft_str_is_numeric(d);
    printf("%d\n", is_numeric);



}*/

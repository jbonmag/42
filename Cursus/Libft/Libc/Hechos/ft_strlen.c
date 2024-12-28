/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:07:15 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/27 17:07:17 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The strlen() function calculates the length of the string pointed to by
       s, excluding the terminating null byte ('\0').
RETURN VALUE
       The strlen() function returns the number of bytes in the string pointed
       to by s.
*/
int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
int main(void)
{
    char    *s = "Amorenauer";
    printf("%d\n", ft_strlen(s));
    //El resultado debe ser = 10
}
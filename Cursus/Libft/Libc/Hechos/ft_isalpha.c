/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:04:07 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/27 17:04:26 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
These  functions  check  whether c, which must have the value of an unsigned
char or EOF, falls into a certain character class  according  to 
the  specified  locale. 
Checks  for  an  alphabetic character.

RETURN VALUE
The values returned are nonzero if the character  c  falls  into  
the tested class, and zero if not.
*/
//#include    "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c > 97 && c <= 122))
        return (c); //comprobar que aqui puede ir c y no 1
    else
        return (0);
}

int main(void)
{
	char c, result;

    c = '*';
 	  result = ft_isalpha(c);
    printf("The result is %d\n", result);

    c = 'g';
  	result = ft_isalpha(c);
    printf("The result is %d\n", result);

    c = '+';
  	result = ft_isalpha(c);
    printf("The result is %d\n", result);

  	return 0;
 }
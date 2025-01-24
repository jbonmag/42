/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:10:13 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/24 12:10:30 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdarg.h>
#include "ft_print.h"

static int	input_esperado(const char *format, unsigned int *i, va_list *args)
{
	unsigned int	counter;

	counter = 0;
	if (format[*i] == 'c')
		counter += printf_char(va_arg(*args, int));
	else if (format[*i] == 's')
		counter += printf_string(va_arg(*args, char *));
	else if (format[*i] == 'p')
		counter += printf_ptr(va_arg(*args, void *));
	else if (format[*i] == 'd' || input[*i] == 'i')
		counter += printf_nbr(va_arg(*args, int));
	else if (format[*i] == 'x')
		counter += printf_hex(va_arg(*args, int), 1);
	else if (format[*i] == 'X')
		counter += printf_hex(va_arg(*args, int), 0);
	else if (format[*i] == 'u')
		counter += printf_uint(va_arg(*args, int));
	else if (format[*i] == '%')
	{
		printf_char('%');
		return (1);
	}
	return (counter);
}

int	printf(const char *format, ...)
{
	va_list			args;
	unsigned int	i;
	usigned int		return_length;

	i = 0;
	return_length = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			return_length += input_esperado(input, &i, &ar, gs);
		}
		else
		{
			return_lenght += printf_char(input[i]);
		}
		i++;
	}
	va_ends(args);
	return (return_length);
}

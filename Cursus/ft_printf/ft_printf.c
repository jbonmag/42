/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:10:13 by jubonet-          #+#    #+#             */
/*   Updated: 2025/01/23 12:39:55 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	printf(const char *format, ...)
{
	//Primero implementar función que cuente núm. de char para que nos devuelva el total al final
	//A continuación la lista de excepciones (cspdiuxX%) 

	va_list	amorenauer
	{
		//c --> putstr
		//s --> putstr
		//p --> este parece chunguer, mirar que me puede sacar un HEX
		//d --> isalnum?
		//i --> joder con las funciones, toca repasar (isalnum?)
		//u --> ahí va una de enteros unsigned
		//x --> Hex en minusculas (unsigned int)
		//X --> Hex en mayúsculas (unsigned int)
		//% --> Recuerda que función pilla carácteres rarunos (ASCII 37)
		// Con esto y un bizcocho ya lo tendriamos todo hasta mañana a las 8 (o 9).


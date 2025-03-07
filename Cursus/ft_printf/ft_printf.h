/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 00:16:10 by jubonet-          #+#    #+#             */
/*   Updated: 2025/02/12 00:17:11 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_format_case(va_list args, char c);

int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *str, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putunsigned(unsigned int n);
int		ft_putptr(void *ptr);
int		ft_putnbr_base(unsigned long long int n, const char *base);
size_t	ft_strlen(const char *s);

#endif

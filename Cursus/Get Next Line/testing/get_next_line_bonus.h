/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 00:28:12 by jubonet-          #+#    #+#             */
/*   Updated: 2025/03/09 11:41:01 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

char    *get_next_line(int fd);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strchr(const char *string, int searchedChar);

void    ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

size_t	ft_strlen(const char *s);

#endif

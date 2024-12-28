/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:06:07 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/26 11:22:56 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void	ft_display_file(int fd)
{
	char	buf[BUF_SIZE];
	int		bytes_read;

	while (1)
	{
		bytes_read = read(fd, buf, BUF_SIZE);
		if (bytes_read <= 0)
			break ;
		write(1, buf, bytes_read);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}

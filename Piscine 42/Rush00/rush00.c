/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchicote,santunes,jubonet- <marvin@42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:41:57 by dchicote          #+#    #+#             */
/*   Updated: 2024/07/07 18:20:03 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	variables(int col, int fil, int x, int y)
{
	if ((fil == 0 && col == 0) || (fil == 0 && col == x - 1))
		ft_putchar('o');
	else if ((fil == y - 1 && col == 0) || (fil == y - 1 && col == x - 1))
		ft_putchar('o');
	else if (fil == 0 || fil == y -1)
		ft_putchar('-');
	else if (col == 0 || col == x -1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	fil;
	int	col;

	fil = 0;
	if (x < 1 || y < 1)
	{
		return ;
	}
	else
	{
		while (fil < y)
		{
			col = 0;
			while (col < x)
			{
				variables(col, fil, x, y);
				col++;
			}
			ft_putchar('\n');
			fil++;
		}
	}
}

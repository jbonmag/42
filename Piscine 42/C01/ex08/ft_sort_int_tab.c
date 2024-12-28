/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:31:16 by jubonet-          #+#    #+#             */
/*   Updated: 2024/07/16 17:11:26 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	aux;

	a = 0;
	b = 1;
	while (a < size - 1)
	{
		if (tab[b] < tab[a])
		{
			aux = tab[b];
			tab[b] = tab[a];
			tab[a] = aux;
			a = 0;
			b = 1;
		}
		else
		{
			a++;
			b++;
		}
	}
}

/*#include <stdio.h>

void	print_array(int *tab, int size)
{
	for (int a = 0; a < size; a++)
	{
		printf("%d ", tab[a]);
	}
	printf("\n");
}
int	main(void)
{
	int	tab[]={12 , 16 , 1 , 67 , 88 , 13};
	int	size = 6;
	printf("El array desordenado es: ");
	print_array(tab, size);
	printf("El array ordenado es: ");
	ft_sort_int_tab(tab, size);
	print_array(tab, size);
	return (0);
}*/

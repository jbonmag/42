/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 08:46:42 by jubonet-          #+#    #+#             */
/*   Updated: 2024/12/23 10:59:33 by jubonet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (i < argc)
	{
		j = 0;
		str = argv[i];
		while (str[j] != '\0')
		{
			ft_putchar(str[j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

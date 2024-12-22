void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		str = argv[i];
		while (str[++j] != '\0')
			ft_putchar(str[j]);
		ft_putchar('\n');
	}
	return (0);
}
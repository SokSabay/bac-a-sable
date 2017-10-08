
int	ft_arguments(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc < 2)
		return (0);
	while (argv[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	ft_arguments(argc, argv);
	return (0);
}

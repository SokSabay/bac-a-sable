#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_arguments(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while(j < argc)
	{
		while(argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	ft_arguments(argc, argv);
	return (0);
}

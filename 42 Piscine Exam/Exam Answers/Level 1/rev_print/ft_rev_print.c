#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


int		main(int ac, char **av)
{
	int len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len--)
			write(1, &av[1][len], 1);
	}
	ft_putchar('\n');
}
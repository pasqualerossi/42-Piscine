#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j++;
	}
}
/* this is a program and doesn't require an int main,
only a function requires an int main. */

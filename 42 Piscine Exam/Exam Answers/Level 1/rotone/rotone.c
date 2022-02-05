#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	char	ltr;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ltr = argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				ltr += 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				ltr += 1;
			if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				ltr -= 25;
			write(1, &ltr, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

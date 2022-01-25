#include<unistd.h>

int	main(int x, char **str)
{
	if (x > 1)
		while (*str[x - 1])
			write(1, str[x - 1]++, 1);
	write(1, "\n", 1);
	return (0);
}

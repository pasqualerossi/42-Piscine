#include <unistd.h>

int main(int argc, char **argv)
{
	int i = -1;

	if (argc > 1)
		while (argv[1][++i])
			write(1, &argv[1][i], 1);
	write(1, "\n", 1);
	return (0);
}

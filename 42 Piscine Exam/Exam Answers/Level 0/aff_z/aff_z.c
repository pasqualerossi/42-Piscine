#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "z\n", 1);
	return (0);
}

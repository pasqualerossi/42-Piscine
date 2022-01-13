#include <unistd.h>

void	ft_print_alphabet()
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}

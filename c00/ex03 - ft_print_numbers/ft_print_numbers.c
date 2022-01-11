#include <unistd.h>

void	ft_print_numbers(void)
{
	int	count;

	count = 48;
	while (count <= 57)
	{
		write(1, &count, 1);
		count++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
*/

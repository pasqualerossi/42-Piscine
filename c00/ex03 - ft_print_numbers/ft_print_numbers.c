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

//main to run ft_print_reserve_numbers
//delete this int main before submitting project

int main(void)
{
	ft_print_numbers();
	return (0);
}

//this is a second and shorter version of ft_print_numbers

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
*/

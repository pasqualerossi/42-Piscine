#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	count;

	count = 123;
	while (count-- >= 98)
		write(1, &count, 1);
}
/*

//main to run ft_print_reserve_alphabet
//delete this int main before submitting project

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

//this is a second and shorter version of ft_print_reserve_alphabet

void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
*/

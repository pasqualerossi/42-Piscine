#### :hammer: ft_print_reserve_alphabet.c - Print the Alphabet in Reverse
```c
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
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
```

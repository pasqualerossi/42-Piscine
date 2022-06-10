#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	(n < 0 ? ft_putchar('-') : 1);
	n *= (n > 0 ? -1 : 1);
	(n <= -10 ? ft_putnbr(-(n / 10)) : 1);
	ft_putchar('0' - n % 10);
}

int	main(int ac, char **av)
{
	(void)av;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}

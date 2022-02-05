#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
	}
}
/*
#include <stdio.h>

int main (void)
{
	printf("This should be 2147483648\n");
	ft_putnbr(2147483648);
	printf("\nThis should be -2147483648\n");
	ft_putnbr(-2147483648);
	printf("\nThis should be 0");
	ft_putnbr(0);
	printf("\nThis should be 1");
	ft_putnbr(1);
	printf("\nThis should be 42");
	ft_putnbr(42);
	ft_printf("\n");
	return (0);
}
*/

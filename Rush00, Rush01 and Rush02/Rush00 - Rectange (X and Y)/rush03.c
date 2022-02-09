#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char start, char middle, char end, int column_count)
{
	ft_putchar(start);
	while (--column_count > 1)
		ft_putchar(middle);
	if (column_count)
		ft_putchar(end);
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		i = 0;
		while (i < y)
		{
			if (i == 0)
				print_line('A', 'B', 'C', x);
			else if (i == y - 1)
				print_line('A', 'B', 'C', x);
			else
				print_line('B', ' ', 'B', x);
			i++;
			write(1, "\n", 1);
		}
	}
}

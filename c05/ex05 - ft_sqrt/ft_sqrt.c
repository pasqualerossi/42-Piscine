int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(4));
}
*/

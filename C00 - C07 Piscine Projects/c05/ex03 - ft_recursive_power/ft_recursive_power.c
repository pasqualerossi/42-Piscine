int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}	
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_recursive_power(5,3));
}
*/

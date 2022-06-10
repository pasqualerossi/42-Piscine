#include <unistd.h>

void print_hex(int p)
{
	char *str = "0123456789abcdef";
  
	if (p == 0)
		write (1, "0", 1);
	while (p)
	{
		write(1, &str[p % 16], 1);
		p  /= 16;
	}
}

int ft_atoi(char *str)
{
	int i = 0;
	int nbr = 0;
	int sign = 1;

	if (!str[i])
		return (0);
	while (str[i] == ' ' || (*str >= 9 && *str <= 13))
		i += 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && (str[i] >= '0' && '9' >= str[i]))
		nbr = (nbr * 10) + str[i++] - '0';
	return (nbr * sign);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
		{
			return (0);
		}
		++i;
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	fputs(ft_str_is_numeric("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_numeric("1211316131618531864987844651") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_numeric("11561616818613168681351681616^") ? "true\n" : "false\n", stdout);
}
*/

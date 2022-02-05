int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	int isprint;
	char a[] = "\n";
	isprint = ft_str_is_printable(a);
	printf("%d\n", isprint);
}
*/

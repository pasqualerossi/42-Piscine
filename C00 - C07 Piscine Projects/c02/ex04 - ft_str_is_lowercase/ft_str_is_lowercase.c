int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int    main(void)
{
    int islower;
    char a[] = "123";
    islower = ft_str_is_lowercase(a);
    printf("%d\n", islower);
}
*/

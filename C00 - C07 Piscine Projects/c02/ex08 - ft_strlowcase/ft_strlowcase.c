char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include<stdio.h>

int main()
{
    char a[] = "PASQUALE SAYS HI";
    printf("%s\n", ft_strlowcase(a));
    return (0);
}
*/

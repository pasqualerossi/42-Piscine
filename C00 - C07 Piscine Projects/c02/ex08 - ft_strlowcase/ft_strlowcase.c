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
#include <stdio.h>

int main(void)
{
	char str[] = "MesCouidlls au b0rd de l0$%^";

	printf("%s\n", ft_strlowcase(str));
	//printf("%s\n", ft_strlowcase("ajsfoiajSHSHFUDFUcjzojdfijsd15568s4df?"));
	//printf("%s\n", ft_strlowcase("JNDVDHVDUFIVDUFVIODVNXZNVNDB"));
	//printf("%s\n", ft_strlowcase("5116468615168135132100"));
	//printf("%s\n", ft_strlowcase("%^*&*()%$#$%^&*(*(&*(&^%*&$^%$%)))"));
}
*/

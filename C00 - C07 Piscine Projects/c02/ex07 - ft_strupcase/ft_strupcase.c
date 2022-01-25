char	*ft_strupcase(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "MesCouidlls au b0rd de l0$%^";

	printf("%s\n", ft_strupcase(str));
	//printf("%s\n", ft_strupcase("ajsfoiajSHSHFUDFUcjzojdfijsd15568s4df?"));
	//printf("%s\n", ft_strupcase("JNDVDHVDUFIVDUFVIODVNXZNVNDB"));
	//printf("%s\n", ft_strupcase("5116468615168135132100"));
	//printf("%s\n", ft_strupcase("%^*&*()%$#$%^&*(*(&*(&^%*&$^%$%)))"));
}
*/

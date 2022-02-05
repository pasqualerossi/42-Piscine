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

int main()
{
	char a[] = "fhjdhfjhfjhfkjdsf";
	
	printf("%s\n", ft_strupcase(a));
	return (0);
} 
*/

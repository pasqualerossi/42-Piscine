char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char *t;

	char b[20] = "hi there!";
	char a[20] = "arrhgjfhgfg";

	t = ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}
*/

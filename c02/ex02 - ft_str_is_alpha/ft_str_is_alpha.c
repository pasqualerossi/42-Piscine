int	ft_str_is_alpha(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{	
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int		main()
{
	fputs(ft_str_is_alpha("abdjisjfnsdfuishdfjsifas") ? "true" : "false", stdout);
	fputs(ft_str_is_alpha("abdjisjfnsdfuishd3fjsifas") ? "true" : "false", stdout);
	fputs(ft_str_is_alpha("abdjisjf``___`]]]]nsdfuishdfjsifas") ? "true" : "false", stdout);

}
*/

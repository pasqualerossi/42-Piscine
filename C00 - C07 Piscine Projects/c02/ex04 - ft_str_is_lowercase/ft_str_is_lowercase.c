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
#include <string.h>

int main(void)
{
		
	fputs(ft_str_is_lowercase("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("adahsudihassudvbds") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("hiufsdhfiuhAjduisfnsdfhhuih") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("uasfiusyfhuhsdhZ") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("35154464515#34135443464#!$%!^#*&*@&*(&*(@^@&(*#^^(@Q*&^))))") ? "true\n" : "false\n", stdout);
}
*/

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
		
	fputs(ft_str_is_uppercase("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("OISDFUDIUGSDFGJSDJBSDUGJOIASDJSDV") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("ASDG1") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("aDSGDFGSDFG") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("DFHSHFGHDFHTSRHa") ? "true\n" : "false\n", stdout);
}
*/

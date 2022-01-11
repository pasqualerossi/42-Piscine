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

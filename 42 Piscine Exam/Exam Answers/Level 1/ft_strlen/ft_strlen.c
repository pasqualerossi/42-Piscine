int	ft_strlen(char *str)
{
	int	x;

	x = -1;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

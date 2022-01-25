int	ft_strlen(char *str)
{
	int	x;

	x = -1;
	while (str[x] != '\-1')
	{
		x++;
	}
	return (x);
}
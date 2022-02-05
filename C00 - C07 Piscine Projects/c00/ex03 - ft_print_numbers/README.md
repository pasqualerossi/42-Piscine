#### :hammer: ft_print_numbers.c

Print the Numbers 0 to 9
```c
void	ft_print_numbers(void)
{
	int	count;

	count = 48;
	while (count <= 57)
	{
		write(1, &count, 1);
		count++;
	}
}
/* //main to run ft_print_reserve_numbers
int main(void)
{
	ft_print_numbers();
	return (0);
}
*/
```

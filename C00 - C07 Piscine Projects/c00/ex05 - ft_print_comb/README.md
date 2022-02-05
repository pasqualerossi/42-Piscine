#### :hammer: ft_print_comb.c
```c
void	ft_print_comb(void)
{
	int	    a;
	int	    b;
	int	    c;

	a = '0';
	while (a <= '7')
	{
		      b = a + 1;
		      while (b <= '8')
		      {
			            c = b + 1;
			            while (c <= '9')
			            {
				                  write(1, &a, 1);
				                  write(1, &b, 1);
				                  write(1, &c, 1);
				                  if (a != '7' || b != '8' || c != '9')
					                  write(1, ", ", 2);
				                  c++;
			            }
			            b++;
		      }
		      a++;
	  } 
}
/* main to run ft_print_comb
int main(void)
{
	ft_print_comb();
}
*/
```

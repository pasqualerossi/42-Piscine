#### :hammer: ft_is_negative.c

Print ’N’ or ’P’ - Depending on the Integer’s Sign Entered as a Parameter.
```c
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/* main to run ft_is_negative
int main(void)
{
	ft_is_negative(5);
	ft_is_negative(-5);
	ft_is_negative(-5);
	return (0);
}
*/
```

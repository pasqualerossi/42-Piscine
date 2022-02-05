#### :hammer: ft_putchar.c
```c
#include <unistd.h>

void	ft_putchar(char c)
{
  	write(1, &c, 1);
}
/* main to run ft_putchar
int main(void) 
{
	ft_putchar('a');
}
*/
```

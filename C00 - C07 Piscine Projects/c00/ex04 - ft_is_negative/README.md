#### :hammer: ft_is_negative.c

Print ’N’ or ’P’ - Depending on the Integer’s Sign Entered as a Parameter.
```c
#include <unistd.h>

void ft_is_negative(int n)
{
    if (n < 0) // Check if the value of 'n' is less than 0
        write(1, "N", 1); // Write the character 'N' to the standard output if 'n' is negative
    else // If 'n' is not negative
        write(1, "P", 1); // Write the character 'P' to the standard output
}

/* main to run ft_is_negative
int main(void)
{
	ft_is_negative(5);
	ft_is_negative(0);
	ft_is_negative(-5);
	return (0);
}
*/
```
#### Excepted Output <br>
P
P
N

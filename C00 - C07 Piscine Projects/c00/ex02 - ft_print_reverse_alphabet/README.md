#### :hammer: ft_print_reserve_alphabet.c 

Print the Alphabet in Reverse - z to a
```c
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    int count; // Declare a variable 'count' of type int

    count = 123; // Assign the ASCII value of the character after 'z' to 'count'
    while (count-- >= 98) // Loop while 'count' is greater than or equal to the ASCII value of lowercase 'b'
        write(1, &count, 1); // Write the character represented by 'count' to the standard output
}

/*
//main to run ft_print_reserve_alphabet
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
```
#### Excepted Output <br>
zyxwvutsrqponmlkjihgfedcba%

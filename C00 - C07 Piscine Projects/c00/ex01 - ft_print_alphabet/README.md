#### :hammer: ft_print_alphabet.c

Print the Alphabet - a to z

ASCII <br>
- 97 = 'a' <br>
- 122 = 'z'
```c

#include <unistd.h>

void ft_print_alphabet(void)
{
    char count; // Declare a variable 'count' of type char

    count = 97; // Assign the ASCII value of lowercase 'a' to 'count'
    while (count >= 97 && count <= 122) // Loop while 'count' is within the range of lowercase letters 'a' to 'z'
    {
        write(1, &count, 1); // Write the character represented by 'count' to the standard output
        count++; // Increment 'count' to move to the next character in the alphabet
    }
}

/* main to run ft_print_alphabet
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
```
#### Excepted Output: <br>
abcdefghijklmnopqrstuvwxyz%

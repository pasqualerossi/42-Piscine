#### :hammer: ft_print_numbers.c

Print the Numbers - 0 to 9

ASCII <br>
- 48 = '0' <br>
- 57 = '9'
```c
void ft_print_numbers(void)
{
    int count; // Declare a variable 'count' of type int

    count = 48; // Assign the ASCII value of the character '0' to 'count'
    while (count <= 57) // Loop while 'count' is within the range of ASCII values for digits '0' to '9'
    {
        write(1, &count, 1); // Write the character represented by 'count' to the standard output
        count++; // Increment 'count' to move to the next digit
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
#### Excepted Output <br>
0123456789%

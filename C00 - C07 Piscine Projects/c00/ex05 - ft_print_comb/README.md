#### :hammer: ft_print_comb.c

Combine Numbers Into Different Double Combinations
```c
void ft_print_comb(void)
{
    int a; // Declare a variable 'a' of type int
    int b; // Declare a variable 'b' of type int
    int c; // Declare a variable 'c' of type int

    a = '0'; // Assign the ASCII value of the character '0' to 'a'
    while (a <= '7') // Loop while 'a' is within the range of ASCII values for digits '0' to '7'
    {
        b = a + 1; // Assign the next character value after 'a' to 'b'
        while (b <= '8') // Loop while 'b' is within the range of ASCII values for digits '1' to '8'
        {
            c = b + 1; // Assign the next character value after 'b' to 'c'
            while (c <= '9') // Loop while 'c' is within the range of ASCII values for digits '2' to '9'
            {
                write(1, &a, 1); // Write the character represented by 'a' to the standard output
                write(1, &b, 1); // Write the character represented by 'b' to the standard output
                write(1, &c, 1); // Write the character represented by 'c' to the standard output
                if (a != '7' || b != '8' || c != '9') // If 'a', 'b', and 'c' are not equal to '7', '8', and '9' respectively
                    write(1, ", ", 2); // Write a comma and a space to the standard output
                c++; // Increment 'c' to move to the next digit
            }
            b++; // Increment 'b' to move to the next digit
        }
        a++; // Increment 'a' to move to the next digit
    }
}

/* main to run ft_print_comb
int main(void)
{
	ft_print_comb();
}
*/
```
#### Excepted Output <br>
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789

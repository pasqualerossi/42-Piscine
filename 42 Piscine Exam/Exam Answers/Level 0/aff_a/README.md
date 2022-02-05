# Subject Text
Assignment name  : aff_a <br>
Expected files   : aff_a.c <br>
Allowed functions: write

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e <br>
a$ <br>
$> ./aff_a "dubO a POIL" | cat -e <br>
a$ <br>
$> ./aff_a "zz sent le poney" | cat -e <br>
$ <br>
$> ./aff_a | cat -e <br>
a$

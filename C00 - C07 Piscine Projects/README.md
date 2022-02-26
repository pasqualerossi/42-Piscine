# C Information 🔽

## 42 C Projects
All C projects at 42 require you to have a header on-top of your .c file that looks something like this:

![Screenshot (39)](https://user-images.githubusercontent.com/58959408/152627996-b8e25390-63e6-4829-93b7-461692788f06.png)

To create this header, you can do either of the following:

- In the .c file, type in ```:Stdheader``` or use the keyboard commands ```FN``` + ```ESC``` + ```F1```

## C Libraries 📚

This Github Repo uses only 3 C System Standard Libraries:

:one: ```#include <unistd.h>``` - for the ```write``` function.  <br>

:two: ```#include <stdio.h>``` - for the ```printf``` function. <br>

:three: ```#include <stdlib.h>``` - for the ```NULL``` function.

## ASCII Table 🔡

When looking for characters and symbols in C, you can use decimals to locate them in your .c program/function.

![unknown](https://user-images.githubusercontent.com/82299698/152664282-eb24f09b-4061-470b-8269-47b56efc8682.png)

## Write ✍️

write(1, &c, 1);

### write(``1`` <br>

Write takes the fd (file descriptor) which is either:

- 0 for stdin (standard input)
- 1 for stdout (standard output) - in the Piscine, you will always use 1.
- 2 for stderr (standard error)

### write(1, ``&c``

The middle part of write is what it will print out.

### write(1, &c, ``1``);

The third part of write is how many spaces of what your printing will take up. <br>

## C Data Types

<img width="494" alt="image" src="https://user-images.githubusercontent.com/58959408/155830093-237cb2ff-ee08-4657-aa1d-b1136beac2f5.png">

## Int Main 💻

int   main(void)

### ``int main``

We use int main to compile our C projects.

### int main(```void```)

We use void because we are not taking any arguments, meaning we are not writing directly in the command line, but rather printing our .c program.

## Comments 🗒️

In C, you can comment in your code if you want to leave any notes/information in the code. The program/function will skip over your notes and not
run it when it complies. <br>

To comment your code, you can do either of the following: <br>

`// <your comment>` - double stroke (//) is for commenting single lines. <br>
`/* <your comment> */` - (/* */) is for commenting multiple lines. 

## GCC 📟

To compile your program/function, be in the folder of your program/function and type in the following:

- ```gcc 'filename.c'```

then type the following if its a function (e.g. ft_putchar.c):

- ```./a.out``` 

or type the following if its a program (e.g. int	main(int argc, char **argv)):

- ```./a.out 'str1' 'str2'```

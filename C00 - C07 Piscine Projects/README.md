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

## Int Main 💻

int   main(void)

### ``int main``

We use int main to compile our C projects.

### int main(```void```)

We use void because we are not taking any arguments, meaning we are not writing directly in the command line, but rather printing our .c program.

## C Libraries 📚

This Github Repo uses only 3 C System Standard Libraries:

:one: ```#include <unistd.h>``` - for the ```write``` function.  <br>

:two: ```#include <stdio.h>``` - for the ```printf``` function. <br>

:three: ```#include <stdlib.h>``` - for the ```NULL``` function.

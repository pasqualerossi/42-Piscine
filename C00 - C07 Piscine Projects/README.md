## Write

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

#include <stdio.h>

/* Exercise 1-2. Experiment to find out what happens when printf's argument
* string contains \x, where x is some character not listed above. */

/* Apparently, unknown escape characters get ignored with a warning (i.e.,
* program still compiles). Also \x itself is for hexadecimal representations of
* characters */

main()
{
    printf("hello, \y");
    printf("world \x43");
    printf("\n");
}


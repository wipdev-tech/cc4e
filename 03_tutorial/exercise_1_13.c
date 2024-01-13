#include <stdio.h>

// Write a program to convert its input to lower case, using a function
// lower(c) which returns c if c is not a letter, and the lower case value of c
// if it is a letter.

int main()
{
    int c;
    while ((c = getchar()) != EOF)
         putchar(lower(c));
}

int lower(c)
int c;
{
    if (c < 'A' || c > 'Z')
        return c;

    int diff = 'a' - 'A';
    return c + diff;
}

#include <stdio.h>

/* Exercise 1-10. Write a program which prints the words in its input, one per
* line. */

int main ()
{
    int c;
    int lastblank;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (lastblank == 0)
                putchar('\n');
            lastblank = 1;
        } else {
            putchar(c);
            lastblank = 0;
        }
    }
}


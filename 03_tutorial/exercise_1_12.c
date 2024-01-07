#include <stdio.h>

// Write a program to print a histogram of the lengths of words in its input.
// It is easiest to draw the histogram horizontally; a vertical orientation is
// more challenging.

int main()
{
    int c, i, j, len, inword;
    int lens[10];

    len = 0;
    inword = 0;
    for (i = 0; i < 10; i++)
        lens[i] = 0;
    
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n') {
            if (inword == 1) {
                lens[len]++;
                inword = 0;
                len = 0;
            }
        } else {
            if (inword == 0) {
                inword = 1;
            }
            len++;
        }
    
    for (i = 1; i < 10; i++) {
        printf("%d |", i);
        for (j = 0; j < lens[i]; j++)
            printf("-");
        printf("\n");
    }
}

#include <stdio.h>

/* Exercise 1-9. How would you test the word count program? What are some
* boundaries? */

/* It considers a sequence of non-letter symbols as words */

#define YES 1
#define NO  0

int main ()
{
    int c, nl, nw, nc, inword;
    inword = NO;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n')
            inword = NO;
        else if (inword == NO) {
            inword = YES;
            ++nw;
        }
    }
    
    printf("%d %d %d\n", nl, nw, nc);
}


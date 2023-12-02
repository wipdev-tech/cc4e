#include <stdio.h>

/* Exercise 1-11. Revise the word count program to use a better definition of
* "word," for example, a sequence of letters, digits and apostrophes that
* begins with a letter. */

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
        if (c >= 33 && c <= 125 && inword == NO) {
            inword = YES;
            ++nw;
        } else if (c < 33 || c > 125) {
            inword = NO;
        }
    }
    
    printf("%d %d %d\n", nl, nw, nc);
}


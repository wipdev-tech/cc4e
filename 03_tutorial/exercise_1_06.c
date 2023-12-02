#include <stdio.h>

/* Exercise 1-6. Write a program to count blanks, tabs, and newlines. */

int main() {
    int c, nws;
    nws = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n')
            nws++;
    }
    printf("%d\n", nws);
}


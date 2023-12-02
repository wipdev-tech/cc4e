#include <stdio.h>

/* Exercise 1-7. Write a program to copy its input to its output, replacing
* each string of one or more blanks by a single blank. */

int main() {
    int lastblank;
    char c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && lastblank == 0) {
            putchar(c);
            lastblank = 1;
        } else if (c != ' ') {
            putchar(c);
            lastblank = 0;
        }
    }
}

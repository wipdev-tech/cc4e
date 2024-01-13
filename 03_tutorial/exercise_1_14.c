#include <stdio.h>

#define MAXLINE 10

/* Revise the main routine of the longest-line program so it will correctly
 * print the length of arbitrarily long input lines, and as much as possible of
 * the text. */

main()
{
    int len;
    int max;
    char line[MAXLINE];
    char save[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(line, save);
        }

    if (max > 0)
        printf("%d\n", max);
        printf("%s\n", save);
}

get_line(s, lim)
char s[];
int lim;
{
    int c, i;
    for (i=0; (c=getchar())!= EOF && c!= '\n'; ++i)
        if (i<lim-1)
            s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return (i);
}

copy(s1, s2)
char s1[], s2[];
{
    int i;
    i = 0;
    while ((s2[i] = s1[i]) != '\0')
        i++;
}


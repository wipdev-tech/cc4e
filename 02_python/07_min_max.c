#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int first = 1;
    int val, maxval, minval;
    char input[100];

    while (1) {
        if (fgets(input, 100, stdin) == NULL || strcmp(input, "done\n") == 0) {
            break;
        }

        val = atoi(input);
        if (first || val > maxval) {
            maxval = val;
        }
        if (first || val < minval) {
            minval = val;
        }
        first = 0;
    }

    printf("\nMaximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}

#include <stdio.h>

/* Exercise 1-3. Modify the temperature conversion program to print a heading
* above the table. */

int main() {
    printf("FAHR   CELSIUS\n");
    printf("---------------\n");

    int lower, upper, step;
    float fahr, cels;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while (fahr <= upper) {
        cels = (5.0 / 9.0) * (fahr - 32);
        printf("%4.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }
}


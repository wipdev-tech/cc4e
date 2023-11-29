#include <stdio.h>

/* Exercise 1-4. Write a program to print the corresponding Celsius to
* Fahrenheit table. */

int main() {
    int lower, upper, step;
    float fahr, cels;
    lower = -20;
    upper = 100;
    step = 10;
    cels = lower;

    while (cels <= upper) {
        fahr = (cels * (9.0 / 5.0)) + 32;
        printf("%4.0f %6.1f\n", cels, fahr);
        cels = cels + step;
    }
}

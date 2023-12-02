#include <stdio.h>

int main() {
    char line[1000];
    printf("Enter a line: ");
    fgets(line, 1000, stdin);
    printf("Echoing...\n%s", line);
}

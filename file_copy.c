#include <stdio.h>

main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    printf("%1d", EOF);
}
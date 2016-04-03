#include <stdio.h>

main() {
    int c;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(' ');
            while ((c = getchar()) == ' ')
                ;
            putchar(c);
        } else {
            putchar(c);
        }
    }
}
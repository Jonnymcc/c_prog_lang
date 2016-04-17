#include <stdio.h>

#define  IN     1
# define OUT  0

main() {
    int c;

    while((c = getchar()) != EOF) {
        if (c == ' ')
            putchar('\n');
        else
            putchar(c);
    }
}

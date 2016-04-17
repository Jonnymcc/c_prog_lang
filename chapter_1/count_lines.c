#include <stdio.h>

main() {
    int c, nl, blanks, tabs;

    nl = 0;
    blanks = 0;
    tabs =0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tabs;
        if (c == ' ')
            ++blanks;
    }
    printf("new line, blanks, tabs\n");
    printf("%d, %d, %d\n", nl, blanks, tabs);
}
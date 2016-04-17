#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
int any(char s[], char t[]);

main() {
	int len;
	char line1[MAXLINE];
	char line2[MAXLINE] = "abc";

	len  = 0;
	while ((len = get_line(line1, MAXLINE)) > 0) {
		printf("%s", line1);
		any(line1, line2);
	}

	return 0;
}


int get_line(char s[], int lim) {
	int c, i;

	for (i = 0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int any(char s1[], char s2[]) {
	int i, x;
	char c;

	for (i = 0; s1[i] != '\0'; i++)
		for (x = 0; (c = s2[x]) != '\0'; x++)
			if (s1[i] == c) {
				printf("%c %d\n", c, i);
			}

	return i;
}

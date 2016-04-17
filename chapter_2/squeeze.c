#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void squeeze(char s[], char t[]);

main() {
	int len;
	char line1[MAXLINE];
	char line2[MAXLINE] = "abc";

	len  = 0;
	while ((len = get_line(line1, MAXLINE)) > 0) {
		printf("%s", line1);
		squeeze(line1, line2);
		printf("%s", line1);
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

void squeeze(char s1[], char s2[]) {
	int i, j, x;
	char c;
	int match;

	for (i = j = 0; s1[i] != '\0'; i++) {
		match = 0;
		// printf("%c, %d, %d\n", s1[i], i, j);
		for (x = 0; (c = s2[x]) != '\0'; x++) {
			if (s1[i] == c)
				match = 1;
		}
		if (!match) {
			s1[j++] = s1[i];
		}
	}

	s1[j] = '\0';
}

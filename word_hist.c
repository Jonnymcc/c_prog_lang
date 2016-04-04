#include <stdio.h>

#define IN 		1
#define OUT		2
#define MAX_LENGTH	15

main() {
	int c, i, x, state, len;
	int word_len_freq[MAX_LENGTH];

	for (i = 0; i < MAX_LENGTH; ++i)
		word_len_freq[i] = 0;

	state = OUT;
	len = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			word_len_freq[len] = word_len_freq[len] + 1;
		} else if (state == OUT) {
			state = IN;
		}
		if (state == IN)
			++len;
		else
			len = 0;
	}

	for (i = 0; i < MAX_LENGTH; ++i) {
		for (x = 0; x < word_len_freq[i]; ++x)
			printf("*");
		printf("\n");
	}
}
#include <stdio.h>

#define LEN_ALPHA	26

main() {
	int c, i, x;
	int char_freq[LEN_ALPHA];

	for (i = 0; i < LEN_ALPHA; ++i)
		char_freq[i] = 0;

	while ((c = getchar()) != EOF)
		++char_freq[c-97];

	for (i = 0; i < LEN_ALPHA; ++i) {
		printf("%c %d ", i+97, char_freq[i]);
		for (x = 0; x < char_freq[i]; ++x)
			printf("*");
		printf("\n");
	}
}
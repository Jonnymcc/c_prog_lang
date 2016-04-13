#include <stdio.h>

int convert(int lower, int upper, int step);

int convert(int lower, int upper, int step) {
	float fahr, celsius;

	fahr = lower;
	printf("  F      C\n");
	while (fahr < upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

main() {
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	convert(lower, upper, step);
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j;
	int result = 0;

	for (i = 2; i < 1000; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) break;
		}
		if (j == i)
		result += j;
	}
	printf("1부터 1000까지의 소수의 합 : %d\n", result);

	return 0;
}

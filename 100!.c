#include <stdio.h>

int factorial(int num) {
	long result = 1;

	for (int x = 1; x <= num; ++x)
		result = result * x;
	return result;
}

int main(void) {
	int num = 100;
	int result = 0;

	result = factorial(num);
	printf("%d!의 값은 %llu입니다. \n", num, result);

	return 0;
}

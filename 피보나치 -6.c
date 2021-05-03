#include <stdio.h>

int main(void) {
	int number = 1;
	int a = 1;
	int b = 1;
	int c = 0;
	int sum = 0;

	printf("1000이하의값을갖는피보나치수열과개수를출력하시오\n");
	printf("----------------------------------------------------\n");
	printf("1 - 1");
	for (c = 0; c < 1000;) { //1000미만의피보나치수열의마지막값: 987

		c = a + b;
		sum -= c;
		number++; //number값을1씩증가
		if (c < 0)
			break;
			printf(" - %d", c);

		if (c >= 1000)
			printf("= %d\n", sum);
		a = b;
		b = c;
	}
	printf("개수: %d\n", number);
	printf("2021E7334 정준영\n");
	return 0;
}

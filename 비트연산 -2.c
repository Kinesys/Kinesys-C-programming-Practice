#include <stdio.h>

int main(void) {
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("AND비트 연산의 결과는 %d입니다.\n", a & b);
	printf("OR비트 연산의 결과는 %d입니다.\n", a | b);
	printf("XOR비트 연산의 결과는 %d입니다.\n", a ^ b);

	return 0;
}

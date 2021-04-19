#include <stdio.h>

int main(void) {
	int a, b, c;
	int	sum = 0;
	printf("점수를 입력하세요 : ");

	scanf_s("%d %d %d", &a, &b, &c);

	sum = a + b + c;

	if (sum >= 100) {
		printf("결과는 %d 합격\n", sum);

	}
	else {
		printf("결과는 %d 불합격\n", sum);
	}
	return 0;
}

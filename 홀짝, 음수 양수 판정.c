#include <stdio.h>

int main(void) {
	int number;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &number);

	if (number > 0) {
		printf("입력한 값은 양수입니다\n");
	}

	else {
		printf("입력한 값은 음수입니다\n");
	}

	if (number % 2 == 0) {
		printf("입력된 값은 짝수입니다.\n");
	}

	else {
		printf("입력된 값은 홀수입니다.\n");
	}

	return 0;

}

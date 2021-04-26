#include <stdio.h>

int main(void) {
	int input;
	printf("양수를 입력해주세여.\n");
	scanf_s("%d", &input);

	if ((input % 2) == 0) {
		printf("입력한 수는 \n");
		printf("짝수입니다. 11\n");
	}
	else {
		printf("입력한 수 %d는 홀수입니다.\n", input);
	}
	return 0;

}

#include <stdio.h>

int main(void) {
	int age;
	printf("나이를 입력하세요.\n");
	scanf_s("%d", &age);

	printf("당신의 나이는 %d세입니다.\n", age);
	return 0;
}

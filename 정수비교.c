#include <stdio.h>

int main(void) {
	int A, B, C;
	printf("정수를 입력해주세요 : "); //순서도에는 없지만 편의를 위하여 삽입하였습니다.
	scanf_s("%d %d %d", &A, &B, &C);

	if (A > B) {
		if (A > C) {
			printf("A");
		}
		else if (B > C) {
			printf("B");
		}
		else {
			printf("C");
		}
		return 0;
	}
}

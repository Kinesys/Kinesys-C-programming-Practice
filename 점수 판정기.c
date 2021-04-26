#include <stdio.h>

int main(void) {
	int jumsu;
	printf("0점에서 100점 사이의 점수를 입력하세요 : \n");
	scanf_s("%d", &jumsu);

	switch (jumsu / 10) {
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			printf("합격입니다.\n");
			break;
		default:
			printf("불합격입니다.\n");
			break;
	}
	return 0;
}

//점수결정.C
#include <stdio.h>

int main(void) {
	int score;

	printf("성적을입력하세요: ");
	scanf_s("%d", &score);

	switch (score/10) {
	case 10:
		printf("당신의 학점은 A입니다.\n");
		break;
	case 9:
		printf("당신의 학점은 B입니다.\n");
		break;
	case 8:
		printf("당신의 학점은 C입니다.\n");
		break;
	case 7:
		printf("당신의 학점은 D입니다.\n");
		break;
	default: 
		printf("당신의 학점은 F입니다.\n");
		break;

	}
	return 0;
}

//점수 결정.C
#include <stdio.h>

int main(void) {
	int score;

	printf("성적을 입력하세요 : ");
	scanf_s("%d", &score);

	if (100 >=score >=  95) {

		printf("당신의 학점은 A+입니다.\n");
	}
	else if (score >= 90) {
		printf("당신의 학점은 A입니다.\n");
	}
	else if (score >= 85) {
		printf("당신의 학점은 B+입니다.\n");
	}
	else if (score >= 80) {
		printf("당신의 학점은 B입니다.\n");
	}
	else if (score >= 75) {
		printf("당신의 학점은 C+입니다.\n");
	}
	else if (score >= 70) {
		printf("당신의 학점은 C입니다.\n");
	}
	else if (score >= 65) {
		printf("당신의 학점은 D+입니다.\n");
	}
	else if (score >= 60) {
		printf("당신의 학점은 D입니다.\n");
	}
	else if (score < 60) {
		printf("당신의 학점은 F 불합격입니다. \n");
	}

	return 0;
}

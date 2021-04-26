#include <stdio.h>

int main(void) {
	int score;

	printf("당신의 점수를 입력하세요 :");
	scanf_s("%d", &score);

	switch (score / 10)
	{
		case 10:
		case 9:
			printf("점수는 %d이고 성적은 %c입니다.\n", score, 'A');
			break;
		case 8:
			printf("점수는 %d이고 성적은 %c입니다.\n", score, 'B');
			break;
		case 7:
			printf("점수는 %d이고 성적은 %c입니다.\n", score, 'C');
			break;
		case 6:
			printf("점수는 %d이고 성적은 %c입니다.\n", score, 'D');
			break;
		default:
			printf("점수는 %d이고 성적은 %c입니다.\n", score, 'F');
		break;
	}
	return 0;
}

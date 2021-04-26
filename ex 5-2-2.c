#include <stdio.h>

int main(void) {
	int jumsu;
	printf("0점에서 100점 사이의 점수를 입력하세요 : \n");
	scanf_s("%d", &jumsu);

	 if (jumsu > 70 && jumsu < 80)
		printf("%d학점은 C학점입니다. \n", jumsu);

	 else if (jumsu > 60 && jumsu < 70)
		 printf("%d점은 D학점입니다.\n", jumsu);

	 else if (jumsu >= 0 && jumsu < 60)
		 printf("%d점은 F학점입니다.\n", jumsu);

	 

	return 0;
}

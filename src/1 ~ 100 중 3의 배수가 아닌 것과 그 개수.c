#include <stdio.h>

int main(void) {
	int i = 0;
	int j = 0;
	int data = 0;
	printf("1-100 중 3의 배수가 아닌 것을 출력하고 몇 개인지 표시하시오.\n");
	printf("----------------------------------------------------------\n");
	printf("1 ~ 100 중 3의 배수가 아닌 것은 ");
	for (int i = 1; i <= 100; i++) {
		if (i % 3 != 0) {
			printf("%d, ", i);
			data++;
		}
	}
	printf("\n");
	for (j = 1; j <= 100; j++) {
		if ((i % 3) != 0) {
			data++;
		}
	}
	printf(" (!) 1 ~ 100 중 3의 배수가 아닌 것은 %d개입니다.\n", data);
	return 0;
}

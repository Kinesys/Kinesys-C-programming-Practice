#include<stdio.h>

int main(void) {

	int data[1000];
	int num;
	int i;

	printf("1000이하의 피보나치 수열을 구합니다.\n");
	scanf_s("%d", &num);

	data[0] = 1;
	data[1] = 1;

	for (i = 2; i <= num-1; i++) {
		data[i] = data[i - 1] + data[i - 2];
	}

	printf("%d 까지의 피보나치 수열은\n", num);

	for (i = 0; i <= num - 1; i++) {
		printf("%d,  ", data[i]);

	}

	printf("\n입니다\n");
}

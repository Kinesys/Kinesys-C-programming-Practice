#include <stdio.h>

int main(void) {
	int number = 67;

	printf("67을 8진수로 변환하면 %o이다.\n", number);
	printf("67을 10진수로 변환하면 %d이다.\n", number);
	printf("67을 16진수로 변환하면 %x이다.\n", number);
	printf("67을 문자형으로 변환하면 %c이다.\n", number);

	return 0;
}

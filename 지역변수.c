#include <stdio.h>

int x;

void sub();

int main(void) {

	printf("1. x = %d \n", x);
	
	for (x = 0; x < 10; x++) {
		sub();
	}
	printf("4. x = %d \n", x);
}

void sub() {
	printf("2. x = %d \n", x);

	for (x = 0; x < 10; x++) {
		printf("*");
	}
	printf("3 x = %d \n", x);
}

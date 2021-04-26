#include <stdio.h>
#include <stdlib.h>
int main()
{
	int data, i, j, k;
	data = 5;
	for (i = 1; i <= data; i++) {
		for (j = 5; j > i; j--) {
			printf(" ");
		}
		for (k = 1; k <= i; k++) {
			printf("%d", i);
		}
		printf("\n");
	}
	getch();
	return 0;
}

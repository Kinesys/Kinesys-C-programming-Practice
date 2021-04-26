#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, i, j;
	num = 5;
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
	getch();
	return 0;
}

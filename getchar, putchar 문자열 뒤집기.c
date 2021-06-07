#include <stdio.h>
#include <string.h>

int main(void) {
	int i = 0;

	char str[100];

	while ((str[i] = getchar()) != '\n')
		i++;
		

	while (i > -1) {
		putchar(str[i]);
		i--;
	}

	return 0;
}

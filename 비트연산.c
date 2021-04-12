#include <stdio.h>

int main(void)
{
	int x, y;
	x = 9;
	y = 5;
	printf("AND %d\n", x & y);
	printf("OR %d\n", x | y);
	printf("XOR %d\n", x ^ y);
	printf("Lshift %d\n", x << y);
	printf("Rshift %d\n", x >> y);
	printf("~ %d\n", ~x);
	return 0;
}

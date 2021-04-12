#include <stdio.h>
int main() {
	int x = 10, y = 10, z;
	x = y++;
	z = (++x) % 3;

	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
}

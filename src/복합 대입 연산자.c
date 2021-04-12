#include <stdio.h>

int main(void)
{
	int x, y;
	x = 9;
	y = 4;
	printf("X += Y = %d\n", x += y);
	printf("X -= Y = %d\n", x -= y);
	printf("X *= Y = %d\n", x *= y);
	printf("X /= Y = %d\n", x /= y);
	printf("X %= Y = %d\n", x %= y);
	printf("X &= Y = %d\n", x &= y);
	printf("X |= Y = %d\n", x |= y); 
	printf("X ^= Y = %d\n", x ^= y); 
	printf("X >>= Y = %d\n", x >>= y); 
	printf("X <<= Y = %d\n", x <<= y);
	return 0;
}

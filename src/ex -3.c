#include <stdio.h>
int main() {
	int a, b, c;
	a = 20; b = 20;
	a += b;
	c = ++a;
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	a = b + ++c;
	printf("a = b + ++c 문장 실행 후\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	a = b++ + c++;
	printf("a = b++ + c++ 문장 실행 후\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);
}

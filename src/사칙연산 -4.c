#include <stdio.h>

int main(void) {
  int x = 20;
  int y = 10;

  int a = x + y;
  int b = x - y;
  int c = x * y;
  int d = x / y;

  printf("두수의 합 %d", a);
  printf("두수의 차 %d", b);
  printf("두수의 곱 %d", c);
  printf("두수의 몫 %d", d);

  return 0;
}

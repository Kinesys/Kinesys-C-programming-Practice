#include <stdio.h>

typedef int integer;
typedef unsigned int u_int;

int main(void) {
  int a = 10, c, e;
  integer b = 20;
  u_int d = 30;

  c = a + b;
  printf("변수 c는 %d이다.\n", c);

  e = a + d;
  printf("변수 e는 %d이다.\n", e);
  return 0;
}

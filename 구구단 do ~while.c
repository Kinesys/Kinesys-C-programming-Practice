#include <stdio.h>

int main(void) {
  int x;
  int y;

  x = 2;
  y = 1;

  do {
    do {
      printf("%d * %d = %d\n", x, y, x * y);
      y++;
    } while(y < 10);

    x++;
    y = 1;

    printf("\n");

  } while(x < 10);

  return 0;
}

#include <stdio.h>

int main(void) {
  int x;
  int y;
  int z;

  for (x = 1; x < 10; x+=3) {
    for (y = 1; y < 10; y++) {
      for (z = x; z < x + 3; z++) {
        printf("%2d * %2d = %2d", z, y, z * y );
        printf("\t");
      }
        printf("\n");
    }
      printf("--------------   -------------   -------------");
      printf("\n");
  }
  return 0;
}

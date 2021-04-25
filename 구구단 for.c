#include <stdio.h>

int main(void) {
  int x;
  int y;
  int z;

  printf("1단부터 9단까지의 구구단을 출력합니다. \n");

  for (z = 0; z < 3; z++) {
    for (x = 1; x < 10; x++) {
      for (y = 1; y < 4; y++) {
        printf("%2d * %2d = %2d\t", (z * 3) + y, x, ((z * 3) + y) * x);
      }
      printf("\n");
    }
    printf("\n");
  }
}

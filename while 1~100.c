#include <stdio.h>

int main(void) {
  int x;
  int y = 100;
  int sum;

  x = 1;
  sum = 0;

  printf("1 ~ 100까지의 합을 계산합니다. ");

  while(x <= y) {
    sum += x;
    x++;
  }
  printf("1부터 100까지의 합은 %d입니다.\n", sum);
  return 0;
}

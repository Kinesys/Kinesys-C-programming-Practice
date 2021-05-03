#include <stdio.h>

int main(void) {
  int data = 0;
  int sum = 0;

    for (data = 1; data <= 100; data++) {
    sum += data;
  }
  printf("1부터 100까지의 합은 %d입니다. \n", sum);

  return 0;
}

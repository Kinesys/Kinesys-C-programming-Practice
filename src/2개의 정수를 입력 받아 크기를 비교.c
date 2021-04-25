#include <stdio.h>

int main(void) {
  int a, b;

  printf("2개의 정수를 입력 받아 크기를 비교합니다.");

  printf("두 개의 정수를 입력해주세요 : ");
  scanf("%d %d", &a, &b);

  printf("\n 두 수를 비교한 결과\n");

  if (a > b) {
    printf("a(%d)가 b(%d)보다 크다. \n", a, b);
  }
    if (a < b) {
      printf("a(%d)가 b(%d)보다 작다. \n", a, b);
    }
      if (a == b) {
        printf("a(%d)와 b(%d)가 같다 \n", a, b);
      }
      return 0;
}

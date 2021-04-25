#include <stdio.h>

int main(void) {
  int data; //입력 받을 정수 데이터 변수 선언
  int x = 1; //증가시킬 값

  printf("출력하고 싶은 구구단의 단을 입력하세요 : ");
  scanf_s("%d", &data);

  while (x <= 9) {
    printf("%d * %d = %d\n", data, x, data * x);
    x++;
  }
  return 0;
}

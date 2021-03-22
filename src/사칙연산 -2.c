#include <stdio.h>

int main(void) {
  int x;      //첫 번째 정수를 저장할 변수
  int y;      //두 번째 정수를 저장할 변수
  int sum, diff, mul, div;    //두 정수 간의 연산의 결과를 저장하는 변수

  x = 20;
  y = 10;

  sum = x + y;
  diff = x - y;
  mul = x * y;
  div = x / y;

  printf("두수의 합\n", sum );
  printf("두수의 차\n", diff );
  printf("두수의 곱\n", mul );
  printf("두수의 몫\n", div );

  return 0;
}

#include <stdio.h>

void input();
void add();
void output();

//main()에 들어있지 않은 변수를 전역변수라고 한다.
int a, b;   //전역 변수
int sum;    //전역 변수

void input() {

  scanf("%d %d", &a, &b);

}

void add() {

  sum = a + b;

}

void output() {

  printf("%d + %d = %d\n", a, b, sum);

}

int main(void) {

  input();
  add();
  output();

  return 0;

}

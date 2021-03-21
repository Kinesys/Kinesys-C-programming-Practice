#include <stdio.h>

int main(void) {
  int age = 0, birthyear = 0;

  printf("당신의 나이와 출생년도를 입력하세요\n");
  scanf("%d %d"&age, &birthyear);
  printf("당신은 %d년도에 출생한 %d세 입니다\n",birthyear, age );

  return 0;
}

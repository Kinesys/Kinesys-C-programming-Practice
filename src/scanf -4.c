#include <stdio.h>

void main(void) {
    int a, b;
    printf("scanf 사용하기 -2\n");
    printf("--------------------------------------- \n");
    printf("두 개의 정수를 입력하시오. :");
    scanf("%d %d", &a, &b);
    printf("입력한 값을 8진수로 나타내면 %o와 %o입니다.\n", a, b);
    printf("입력한 값을 10진수로 나타내면 %d와 %d입니다.\n", a, b);
    printf("입력한 값을 16진수로 나타내면 %x와 %x입니다.\n", a, b);
    return 0;
}

#include <stdio.h>

void main(void) {
    int a, b;
    printf("scanf사용하기\n");
    printf("-------------------------------------------------\n");

    printf("첫 번째 정수를 입력하시오 :\n");
    scanf("%d", &a);
    printf("두 번째 정수를 입력하시오 :\n");
    scanf("%d", &b);
    printf("\n 입력한 두 정수를 %d %d의 합은 : %d입니다.\n", a, b, a + b);
    printf("--------------------------------------------------\n");
    return 0;
}

#include <stdio.h>

void main(void) {
    int a, b;

    printf("2개의 정수를 입력 받아 크기를 비교합니다.\n");
    printf("---------------------------------------------\n");
    printf("두 개의 정수를 입력하시오.\n");
    scanf("%d %d", &a, &b);

    printf("\n 두 수를 비교한 결과\n");

    if (a > b) {
        printf("A(%d)가 B(%d)보다 크다 \n", a, b);
    }
        if (a < b) {
            printf("A(%d)가 B(%d)보다 작다\n", a, b);
        }
            if (a == b) {
                printf("A(%d)가 B(%d)랑 같다\n", a, b);
            }
            return 0;
    }
}

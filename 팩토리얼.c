#include <stdio.h>

long factorial (int n) {
    printf("\n factorial(%d) = ", n);

    if (n <= 1) {
        printf("return (1) \n");
        return (1);
    }

    else {
        printf("return (%d * factorial(%d)\n",n , n - 1);
        return(n * factorial(n-1));
    }
}

int main(void) {
    int n = 0;
    long f;

    printf("팩토리얼을 계산할 정수를 입력하세요. :");
    scanf_s("%d", &n);

    printf("\n 결과 : %d!은 %d입니다.\n",factorial(n));

    return 0;
}

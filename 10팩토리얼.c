#include <stdio.h>

long factorial (int n) {
    printf("\n factorial(%d) = ", n);

    if (n <= 1) {
        printf("return (1) \n");
        return (1);
    }
    else {
        printf("return (%d * factorial(%d))\n", n, n-1);
        return (n * factorial(n-1));
    }
}

int main(void) {
    int n = 10;
    long f;
    
    printf("10팩토리얼은 %d입니다.", factorial(n));
    return 0;
}

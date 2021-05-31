#include <stdio.h>

double Average(int, int);

int main(void) {
    int x = 10;
    int y = 20;

    int result;
    
    result = Average(x, y);

    printf("두 수의 평균은 %d\n", result);

    return 0;
}

double Average(int a, int b) {
    double result;

    result = (double) (a + b) / 2.0;

    return result;
}

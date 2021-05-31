#include <stdio.h>

int SumTwo(int, int);

int main(void) {
    int x = 10; 
    int y = 20;
    int result;

    result = SumTwo(x, y);

    printf("합은 %d\n", result);

    return 0;
}

int SumTwo(int a, int b) {
    return a + b;
}

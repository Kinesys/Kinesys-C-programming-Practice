#include <stdio.h>

int Big(int, int);

int main(void) {
    int x = 10;
    int y = 20;
    printf("두 수 중에 큰 값은 %d\n", Big(x, y));

    return 0;
}

int Big(int a, int b) {
    a > b ? return a; :return b;
}

#include <stdio.h>

int main() {
    int x = 1;
    int y = 100;
    int sum = 0;

    printf("1 ~ 100의 합을 계산합니다.\n");

    do {
        sum += x;
        x++;
    } while(x <= y);
    printf("1 ~ 100까지의 합은 %d입니다.\n", sum);
    return 0;

}

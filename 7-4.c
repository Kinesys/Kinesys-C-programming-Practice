#include <stdio.h>

int main(void) {
    int a[3] = {4, 5, 10};
    int sum = 0;
    int i;

    printf("배열의 원소를 모두 더합니다.\n");

    for(i = 0; i < 3; i++) {
        sum += a[i];
    }

    printf("결과는 %d입니다. \n", sum);

    return 0;
}

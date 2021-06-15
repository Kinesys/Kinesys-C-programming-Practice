//while문 1에서 10까지의 합 구하기
#include <stdio.h>

int main(void) {
    int sum = 0;
    int number = 1;

    printf("1에서 `0까지의 합을 구합니다.\n");

    while(number <= 10) {
    
        sum += number;
        number++;
    
    }

    printf("합은 %d입니다.\n", sum);

    return 0;
}

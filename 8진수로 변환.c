#include <stdio.h>

void Dec2Oct(int x);

int main(void) {
    int n;
    
    printf("8진수 변환할 정수를 입력하세요 :");
    scanf("%d", &n);

    printf("환산 결과는 :");

    Dec2Oct(n);

    printf("입니다.\n\n");

    return 0;
}

void Dec2Oct(int x) {
    if (x > 0) {
        Dec2Oct (x / 8);
        printf("%d", x % 8);
    }
}

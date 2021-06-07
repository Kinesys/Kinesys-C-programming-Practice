#include <stdio.h>

void main(void) {
    char str[30] = "dsph9245@naver.com";

    int N = 0;

    while(str[N] != 0) 
        N++;

    printf("문자열 \"%s\"의 길이는 %d입니다.\n", str, N);

    return 0;
}

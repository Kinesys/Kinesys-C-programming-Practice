#include <stdio.h>

int main(void) {
    char str[30] = "Kinesys is Hacker";
    int N = 0;

    while(str[N] != 0) 
        N++;

    printf("문자열 \"%s\"의 길이는 %d입니다.", str, N);

    return 0;
}

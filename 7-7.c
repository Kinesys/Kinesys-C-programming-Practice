#include <stdio.h>

int main(void) {
    int aryTmp[] = {10, 20, 30, 40};
    int i, aryLength;

    aryLength = sizeof(aryTmp) / sizeof(int);

    printf("배열명을 이용해서 주소를 출력합니다. \n");

    for(i = 0; i < aryLength; i++) 

        printf("aryTmp의 %d번째 주소는 %p 이다.\n", i + 1, aryTmp + i);

    return 0;
}

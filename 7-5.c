#include <stdio.h>

int main(void) {
    char name[] = "Peter";

    printf("반복문을 이용해서 문자열을 출력합니다. \n");

    for(i = 0; i < 5; i++) {

        printf("%c", name[i]);
    
    }
    return 0;
}

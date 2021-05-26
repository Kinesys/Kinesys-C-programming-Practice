#include <stdio.h>

int main(void) {
    char subject[] = "English";
    int i = 0;

    printf("반복문을 이용해서 문자를 출력합니다. \n");

    while (subject[i]) putchar(subject[i++]);

    return 0;
}

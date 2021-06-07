#include <stdio.h>
#include <string.h>

char s1[100];
char *p;

int main(void) {
    p = s1;
    printf("뒤집고자 하는 문자열을 입력해주세요 : ");

    get_s(s1);

    printf(p);

    printf("\n\n\n\n\n");

    for(int i = strlen(p) - 1; i > -1; i--)

        printf("%c", p[i]); //역순 출력 실행

    return 0;
}

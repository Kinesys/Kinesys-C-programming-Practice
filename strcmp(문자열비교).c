#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[20]; //배열 크기 20으로 설정 - 길이 20이하의 크기 입력 받음
    char s2[30]; //배열 크기 30으로 설정 - 길이 30이하의 크기 입력 받음

    int result;

    printf("첫번째 문자열을 입력해주세요\n");

    scanf("%s", s1);

    printf("두번째 문자열을 입력해주세요\n");

    scanf("%s", s2);

    result = strcmp(s1, s2);

    if (result < 0)
        
        printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);

    else if (result == 0)

        printf("%s가 %s와 같습니다.\n", s1, s2);

    else

        printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);

    return 0;
}

#include <stdio.h>
#include <string.h>

int check(char s[], char a[], char ch) {
    
    int n;

    for(n = 0; s[n] != NULL; n++) {

        if(s[n] == ch)      a[n] = ch; }

    if(strcmp(s, a) == 0)
        
        return 1; //문자열과 일치하는지를 검사함.
    
    else

        return 0;
    
}

int main(void) {
    char name[30] = "Jeong Jun Young";
    char answer[30] = "_________________";

    char ch;

    while (1) {
        
        printf("문자열을 입력하시오 : %s\n", answer);

        printf("글자를 추측해주세요 : ");

        ch = getchar();

        if (check(name, answer, ch) == 1) break;

        fflush(stdin); //줄바꿈 문자를 제거함.
    }

    return 0;
    
}

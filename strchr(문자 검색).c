#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "Kinesys";
    char c = 's';

    char *p;

    int loc;

    p = strchr(s, c);

    loc = (int)(p - s);

    printf("%s에서 %c를 검색합니다. \n\n\n", s, c);

    if (p != NULL) 
         
        printf("첫번째 %c가 %d자리에서 검색이 되었습니다.\n", c, loc);

    else

        printf("%c가 검색되지 않았습니다.\n", c);

    return 0;


}

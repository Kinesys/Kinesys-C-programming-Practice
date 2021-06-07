#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char s[] = "Kinesys is Programmer? - Kinesys";
    char sub[] = "Kinesys";
    char *p;

    int loc;

    p = strstr(s, sub);

    loc = (int)(p - s);

    printf("%s에서 %s를 검색합니다. \n\n\n\n\n", s, sub);

    if (p != NULL) 

        printf("첫번째 %s가 %d자리에서 발견되었습니다.\n\n", sub, loc);
    
    else

        printf("%s가 발견되지 않았습니다.\n", sub);

    return 0;

}

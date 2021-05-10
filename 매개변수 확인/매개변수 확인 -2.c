#include <stdio.h>

int main(int argc, char *argv[])  {
    int R;

    printf(" Study#1 (Main Function) \n");
    printf("-----------------\n");

    printf("1. 매개변수의 갯수 : argc = %d\n", argc);

    for (R=0; R < argc; R++) {
        printf("\t argv[%d] = %s \n", R, argv[R]);
    }
    printf("-----------------------------------\n");
    return 0;
}

#include <stdio.h>

int main(int argc, char *argv[]) {
    int Value;
    
    printf("Main Function........");
    printf("----------------------------\n");

    printf("1. 매개변수의 갯수 : argc = %d\n", argc);

    for (Value=0; Value < argc; Value++) {
        printf("\t argv[%d] = %s\n", Value, argv[Value]);
    }
    printf("-------------------------------\n");
    return 0;
}

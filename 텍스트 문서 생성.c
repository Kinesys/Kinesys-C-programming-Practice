#include <stdio.h>

int main(void) {
    FILE * file;

    file = fopen_s("kinesys.txt", "wt");

    fprintf("hello world");

    fclose(file);
}

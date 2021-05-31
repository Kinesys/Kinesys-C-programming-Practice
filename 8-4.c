#include <stdio.h>

int cube(int);

int main(void) {
    int x = 10;

    printf("x의 세제곱은 %d\n", cube(x));

    return 0;

}

int cube(int a) {
    return a * a * a;  
}

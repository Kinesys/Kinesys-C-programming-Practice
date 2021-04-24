#include <stdio.h>

int main(void) {
    int i = 1;
    int j;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int data;

    sum1 = 1 + i;
    data = 1 + sum1;

    sum2 = 1 + sum1;
    data = data + sum2;

    for (j = 1 j < 100; j++)
        sum3 = sum1 + sum2;
        data = data + sum3;
        sum1 = sum2 + sum3;
        data = data + sum1;
        sum2 = sum1 + sum3;
        data = data + sum2;

        if(sum1 > 1000) {
            break;
        }

        else if (sum2 > 1000) {
            break;
        }
        else if(sum3 > 1000) {
            break;
        }
        printf("\n");
}
        

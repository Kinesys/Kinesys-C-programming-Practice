#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j;
    int result = 0;
    int n;
    
    printf("1부터 1000사이의 소수의 개수는 : ");
    
    for(n = 1; n <= 1000; n++) {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                break;
            }
        }
        if (i == n) {
            printf("%d ", i);
        }
    }
    
    printf("\n\n");

    for (i = 2; i < 1000; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) break;
        }
        if (j == i)
        result += j;
    }
    printf("1부터 1000까지의 소수의 합 : %d\n", result);

    return 0;
}

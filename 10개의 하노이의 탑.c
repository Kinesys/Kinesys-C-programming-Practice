#include <stdio.h>

void hanoi_tower(int n, char from, chara tmp, char to) {
    if(n == 1) 
        printf("원판 1을 %c에서 %c로 옮깁니다.\n", from, to);

        else {
            
            hanoi_tower(n-1, from, to, tmp);

            printf("원판 %d를 %c에서 %c로 옮깁니다.\n\n", n, from, to);

            hanoi_tower(n-1, tmp, from, to);
        }
}

int main(void) {
    hanoi_tower(10, 'A', 'B', 'C');
    return 0;
}

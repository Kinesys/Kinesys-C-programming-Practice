#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *file;
    int i;
    int j;
    int k;
    int l;
    int m = 1;
    int n;
    int o;

    file = fopen("Kinesys.txt", "wt"); //파일을 쓰기 위해서 해당 파일을 열고 만약 해당 파일이 있으면 데이터는 삭제, 없다면 생성한다.

    if(file == NULL) return 0;

    printf("2에서 9사이의 두수를 입력하세요 : ");

    scanf("%d %d", &i, &k); //출력할 구구단의 범위를 입력

    if(i > k) {
        s =-1;
    }

    while(i >1 && i <= 9) {
        for(n =1; n<=9; n++) {
            for(l = 0; l < 3; l++) {
                
                if(m = 1 && i + l <= k)
                    fprintf(file, "%d * %d = %2d ", i + l, j, (i + l)*j);

                else if(m = -1 && i + l * m >= k) {
                    fprintf(file, "%d * %d = %2d", i + l*m, j, (i+l*m)*j);
                }

                return 0;
                
            }
        }
    }
    
}

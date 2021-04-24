//세 개의 정수를 입력받은 후 크기가 큰 순서부터 출력
//제어문 이용
#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("세 개의 정수 입력:");
    scanf_s("%d%d%d", &a, &b,& c);
    if (a > b)//a>b
    {
        if (a > c)//a>b, a>c
        {
            if (b > c)//a>b>c
            {
                printf("%d %d %d\n", a, b, c);
            }
            else//a>c>=b
            {
                printf("%d %d %d\n", a, c, b);
            }
        }
        else//c>=a>b
        {
            printf("%d %d %d\n", c, a, b);
        }
    }
    else//b>=a
    {
        if (b > c)//b>=a, b>c
        {
            if (a > c)//b>=a>c
            {
                printf("%d %d %d\n", b, a, c);
            }
            else//b>=c>=a
            {
                printf("%d %d %d\n", b, c, a);
            }
        }
        else//c>=b>=a
        {
            printf("%d %d %d\n", c, b, a);
        }
    }
    return 0;
}

#include <stdio.h>
int main(void) { 
    int num1 = 0, num2 = 1, num3 = 0, i = 0, n = 0;

printf("피보나치 수열을 구할때 어느 숫자 이하까지 구하고 싶은가?");
scanf("%d", &n);

while(1)
{
    if(n < 0)
    {
        printf("음수인 피보나치 수가 없습니다.");
        break;
    }
    else if(n==0)
    {
        printf("%d입니다. \n ", 0);
        break;
    }
    else if(n==1)
    {
        printf("%d 입니다. \n ", 1);
        break;
    }

    while(1) 
    {
        if(n - num1 + 1 <= num3)
            break;
        else
        {
            num3 = num1+num2;

            printf("%d\n", num3);
            num1 = num2, num2 = num3;           
        }
        i++;
    }       
    break;
}
return 0;
}

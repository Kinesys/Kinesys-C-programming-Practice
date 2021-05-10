#include <stdio.h>

int main()
{
	int num, i; 
	int data = 0;


	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);


	for (i = 2; i<num; i++) {
		printf("%d %% %d = %d\n", num, i, num % i);
		if (num % i == 0)
			data++;
	}


	if (data == 0)
		printf("소수 입니다.");
	else
		printf("소수가 아닙니다.");

		
	return 0;
}

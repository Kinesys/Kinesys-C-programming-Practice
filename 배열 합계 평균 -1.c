#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	srand(time(NULL));
	int a[10], i, sum = 0, avg=0, count=0;

	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		printf("%d\n", a[i]);
		sum = sum+a[i];
		avg = sum / 10;
	}
	for (i = 0; i < 10; i++)
	{
		if (avg == a[i])
			count++;
	}
	printf("합계:%d\n",sum);
	printf("평균:%d\n", avg);
	printf("평균과 같은 값:%d\n", count);
}

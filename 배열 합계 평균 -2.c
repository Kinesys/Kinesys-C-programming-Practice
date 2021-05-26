#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100

void main()
{
	srand(time(NULL));
	int a[SIZE], i, sum = 0, avg = 0, count = 0;

	for (i = 0; i < 100; i++)
	{
		a[i] = rand() % 100;
		printf("%d\n", a[i]);
		sum = sum + a[i];
		avg = sum / 100;
	}
	for (i = 0; i < 100; i++)
	{
		if (avg == a[i])
			count++;
	}
	printf("합계:%d\n", sum);
	printf("평균:%d\n", avg);
}

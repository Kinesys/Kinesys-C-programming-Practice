#include <stdio.h>

#include<stdlib.h>

int main()

{

	int x = 5;
	int y = 5;

	int data = 1;

	for (int i = 0; i < x; i++)

	{

		for (int j = 0; j < y; j++)

		{

			printf("%d ", data++);

		}

		printf("\n");

	}
	return 0;
}

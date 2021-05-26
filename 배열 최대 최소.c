#include <stdio.h>
#define SIZE 100
int main(void) {

	int data[SIZE];

	int i, max, min;

	for (i = 0; i < 100 ; i++)

	data[i] = rand();

	max = min = data[0];

	for (i = 1; i < 100; i++) {

		if(data[i] < min)

		min = data[i];

		if(data[i] > max)

		max = data[i];

	}

	printf("최대값은 %d\n", max);

	printf("최소값은 %d\n", min);

	return 0;

}

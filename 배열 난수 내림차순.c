#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, j;
	int N[10];
	int tmp = 0;
	
	//난수 배열 생성
	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		N[i] = rand() % 100;
	}

	//난수 내림차순으로 출력
	for (i = 0; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			if (N[i] < N[j]) {
				tmp = N[i]; 
				N[i] = N[j];
				N[j] = tmp;
			}
		}
		printf("%d ", N[i]);
	}
	return 0;
}

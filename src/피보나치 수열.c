#include <stdio.h>

int main()

{

	int i=1,j,sum_1=0,sum_2=0,sum_3=0,ansr;

	sum_1 = 1+i;

	ansr = 1+1+sum_1;//1+1

	sum_2 = 1 + sum_1;

	ansr = ansr + sum_2;

	for(j=1;j<100;j++)

	{

		sum_3 = sum_1 + sum_2;

		ansr = ansr + sum_3;

		sum_1 = sum_2 + sum_3;

		ansr = ansr + sum_1;

		sum_2 = sum_1 + sum_3;

		ansr = ansr + sum_2;

		

		if(sum_1 > 1000000)

			break;

		else if(sum_2 > 1000000)

			break;

		else if(sum_3 > 1000000)

			break;

	}

	printf("\n");

	printf("답은 %d \n", ansr);

	return 0;

}




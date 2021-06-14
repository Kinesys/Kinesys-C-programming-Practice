#include<stdio.h>

int main() 
{
	char str = '0';
	int i, count[26] = { 0 }, num[10] = { 0 }, notchar = -1, k;

	FILE *fp;
	fp = fopen("SteveJobs.txt", "rt");

	while (!feof(fp)) {

		str = fgetc(fp);

		if (str >= 97 && str <= 122) {

			k = str - 97;
			count[k] += 1;

		}

		else if (str >= 65 && str <= 90) {

			k = str - 65;
			count[k] += 1;
		
		}

		else if (str >= '0' && str <= '9') {

			k = str - 48;
			num[k] += 1;
		
		}

		else {

			notchar++;
		
		}
	}

	fclose(fp);

	printf("\t\t 결과\n\n");
	printf("\t\t 알파벳 Count\n  알파벳\t");

	for (i = 0; i < 13; i++) {

		printf("%c   ", 'A' + i);
	
	}

	printf("\n   Count  ");
	
	for (i = 0; i < 13; i++) {

		printf("%2d  ", count[i]);
	
	}

	printf("\n\n  알파벳   ");

	for (i = 13; i < 26; i++) {

		printf("%c   ", 'A' + i);
	
	}
	
	printf("\n   Count  ");
	
	for (i = 13; i < 26; i++) {

		printf("%2d  ", count[i]);
	
	}
	
	printf("\t\t 숫자 Count\n");
	printf("\t\t 0   1   2   3   4   5   6   7   8   9\n\t\t");
	
	for (i = 0; i < 10; i++) {
		
		printf("%2d  ", num[i]);
	
	}

	printf("\t\t 기타 문자 : %2d\n", notchar);

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 256

int main(int argc, char *argv[]) {

	unsigned int i, word_number = 0, count = 0;
	char fn[MAXLINE], buffer[MAXLINE];
	FILE *fp;

	if (argc > 1)

		strcpy(fn, argv[1]);
	
	else

		strcpy(fn, "SteveJobs.txt");

	if ((fp = fopen(fn, "r")) == NULL) {

		printf("파일을 찾을 수 없습니다.: %s\n", fn);
		exit(0);
	
	}

	while (!feof(fp)) {

		if (fgets(buffer, MAXLINE, fp) == NULL) break;

		for (i = 0; i < strlen(buffer); i++) {

			if (buffer[i] == ' ' || buffer[i] == '\n' || buffer[i] == '\t') {

				if (word_number) {

					count++;
					word_number = 0;
				
				}
			}

			else {

				if (!word_number)
					word_number = 1;
			}
		}
	}

	fclose(fp);
	
	printf("해당 문서의 단어의 개수는 \"%s\" is %d.\n", fn, count);
	return 0;
}

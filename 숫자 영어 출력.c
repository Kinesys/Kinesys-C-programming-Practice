#include <stdio.h>
# include <string.h>
int main()
{

	char *down[] = { "Ten", "Hundred", "thousand" };
	char *up[] = { "ten thousand" };
	char *one[] = { "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
	char word[128];
	int a, b, c, d, e = 0;
	printf("숫자입력: ");
	scanf_s("%s", word, sizeof(word));
	c = strlen(word);

	b = ((c - 1) / 4) - 1;
	a = (c % 4 == 0) ? 2 : c % 4 - 2;
	for (d = 0; d < c; d++)
	{
		if (word[d] != '0')
		{
			printf("%s ", one[word[d] - '0' - 1]);
			e++;
		}
		if (a < 0 && c >0)
		{
			if ((e || d == 0) && b >= 0)
			{
				printf("%s ", up[b]);
			}
			b--;
			e = 0;
			a = 2;
		}
		else
		{
			if (word[d] != '0')
			{
				printf("%s ", down[a]);
			}
			a--;
		}
	}
	printf("\n");
	return 0;
}

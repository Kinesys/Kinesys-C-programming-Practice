#include <stdio.h>
#define SIZE 12345

void main()
{
int number[SIZE];
for (int i = 2; i < SIZE i++)
number[i] = i;

for (int i = 2; i * 2 < SIZE i++)
{
if (number[i] == 0)
continue

for (int k = i, j = i; k * j < SIZE j++)
number[k * j] = 0;
}

for (int i = 0; i < SIZE ++i)
if (number[i] != 0)
printf("%d ", number[i]);
printf("소수의개수는1474개입니다.\n");
printf("2021E7334 정준영%d", number);

}

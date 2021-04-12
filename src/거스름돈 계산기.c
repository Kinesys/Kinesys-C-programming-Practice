#include <stdio.h>

int main(void)
{
	int user, change = 0;
	int price, c5000, c1000, c500, c100;

	printf("물건 값을 입력하시오 : ");

	scanf_s("%d", &price); //물건 값을 입력 받음

	printf("사용자가 낸 돈 : ");
	scanf_s("%d", &user);

	change = user - price; //거스름돈을 change에 저장한다.

	c5000 = change / 5000; // 몫 연산자를 이용하여 5000권의 개수를 계산한다.
	change = change % 5000; //나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	c1000 = change / 1000; //남은 잔돈에서 1000원권의 개수를 계산한다.
	change = change % 1000; //나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	c500 = change / 500; //남은 잔돈에서 500원의 개수를 계산한다.
	change = change % 500; //나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	c100 = change / 100; //남은 잔돈에서 100원의 개수를 계산한다.
	change = change % 100; //나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	printf("오천원권 : %d장\n", c5000);
	printf("천원권 : %d장\n", c1000);
	printf("오백원 동전 : %d개\n", c500);
	printf("백원 동전 : %d개\n", c100);

	return 0;
}

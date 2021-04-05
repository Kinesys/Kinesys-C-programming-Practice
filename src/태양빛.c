#include <stdio.h>

int main(void) {
	double light_speed = 300000; // 빛의 속도를 저장하는 변수
	double distance = 149600000; //태양과 지구 사이 거리를 저장하는 변수

	double time;

	time = distance / light_speed; //거리를 빛의 속도로 나눈다.

	printf("빛의 속도는 %dKm/s", light_speed);
	printf("태양과 지구와의 거리 %dKm\n", distance);
	printf("도달시간은 %f초\n", time); //시간을 출력한다

	return 0;
}

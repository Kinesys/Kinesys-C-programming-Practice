#include <stdio.h>

int main(void) {
	double light_speed = 300000; // 빛의 속도를 저장하는 변수
	double distance = 149600000; //태양과 지구 사이 거리를 저장하는 변수
	int minute;
	int time;
	time = distance / light_speed; //거리를 빛의 속도로 나눈다.
	minute = time % 60;
	printf("빛의 속도는 %fKm/s\n", light_speed);
	printf("태양과 지구와의 거리 %fKm\n", distance);
	printf("도달시간은 %d분 %d초입니다.", minute, time);
		
	return 0;
}

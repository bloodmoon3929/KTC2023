#include<stdio.h>
#pragma warning(disable:4996)
#define min 60

int main(void)
{
	int time;
	printf("시간(분단위)을 기입하시오 : ");
	scanf("%d", &time);
	while(time > 0)
	{
		printf("%d분은 %d시간 %d분(0이하의 수를 기입해 종료)", time, time / min, time % min);
		scanf("%d", &time);
	}
	return 0;
}
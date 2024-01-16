#include <stdio.h>
#include <time.h>
void alarm(double sec);
int main(void)
{
	double alarm_time;
	puts("몇 초뒤 알람을 울릴것인지 기입하시오.");
	scanf_s("%lf",&alarm_time);
	alarm(alarm_time);
	return 0;
}
void alarm(double sec)
{
	double start_clock = clock();
	while (((double)clock() - start_clock)/CLOCKS_PER_SEC<=sec)
		continue;
	printf("%g초가 지났습니다.\a",sec);
}
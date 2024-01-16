#include<stdio.h>
#pragma warning(disable:4996)
#define gallon 3.785
#define mile 1.609

int main(void)
{
	float gallon1, mile1, l, km;
	printf("주행한 거리(마일)는 기입하시오 : ");
	scanf("%f", &mile1);
	printf("소비한 휘발유(겔런) 양을 기입하시오 : ");
	scanf("%f", &gallon1);

	l = gallon1 * gallon;
	km = mile1 * mile;

	printf("거리(mile)당 연료(gallon)소비량 : %.1f\n", gallon1 / mile1);
	printf("연료(l)소비량당 거리(km) : %.1f", km / l);

	return 0;
}
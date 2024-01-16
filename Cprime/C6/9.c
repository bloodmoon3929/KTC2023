#include<stdio.h>
#pragma warning(disable:4996)

void math(double x,double y);

int main(void)
{
	double a, b;
	printf("부동소수점을 두개 기입하시오 : ");
	while (scanf("%lf %lf",&a,&b)==2)
	{
		math(a, b);
	}	
	return 0;
}

void math(double x, double y)
{
	double min, mul;
	if (x > y)
	{
		min = x - y;
	}
	else
	{
		min = y - x;
	}
	mul = x * y;
	printf("두 수의 차(%lf)에 두 수의 곱(%lf)을 나눈 값은 : %lf\n", min, mul, min / mul);
	printf("부동소수점을 두개 기입하시오 : ");
}
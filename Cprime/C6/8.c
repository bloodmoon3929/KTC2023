#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double a, b, min, mul;
	printf("부동소수점을 두개 기입하시오 : ");
	while (scanf("%lf %lf",&a,&b)==2)
	{
		if (a > b)
		{
			min = a - b;
		}
		else
		{
			min = b - a;
		}
		mul = a * b;
		printf("두 수의 차(%lf)에 두 수의 곱(%lf)을 나눈 값은 : %lf\n", min, mul, min / mul);
		printf("부동소수점을 두개 기입하시오 : ");
	}	
	return 0;
}
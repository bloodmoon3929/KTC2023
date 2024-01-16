#include<stdio.h>
double min(double x,double y);
int main(void)
{
	double num_1, num_2,lower;
	printf("첫 번째 숫자를 기입하시오 : ");
	scanf("%lf", &num_1);
	printf("두 번째 숫자를 기입하시오 : ");
	scanf("%lf", &num_2);
	lower = min(num_1,num_2);
	printf("작은값은 : %.1f",lower);
	return 0;
}
double min(double x, double y)
{
	if (x > y) return y;
	else return x;
}
#include<stdio.h>
double harmonic(double i, double j);
int main(void)
{
	double num_1, num_2,res;
	printf("첫번째 수를 기입하시오 : ");
	scanf("%lf", &num_1);
	printf("두번째 수를 기입하시오 : ");
	scanf("%lf", &num_2);
	res=harmonic(num_1, num_2);
	printf("%.1lf와 %.1lf의 조화평균은 %.1f입니다.",num_1,num_2,res);
	return 0;
}
double harmonic(double i, double j)
{
	double sum;
	i = 1 / i;
	j = 1 / j;
	sum = (i + j) / 2;
	sum = 1 / sum;
	return sum;
}
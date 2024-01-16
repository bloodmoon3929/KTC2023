#include<stdio.h>
void large(double *p1, double *p2);
int main(void)
{
	double num_1, num_2;
	printf("첫번째 수를 기입하시오 : ");
	scanf("%lf", &num_1);
	printf("두번째 수를 기입하시오 : ");
	scanf("%lf", &num_2);
	large(&num_1, &num_2);
	printf("num_1은 %.1lf, num_2는 %.1lf입니다.",num_1,num_2);
	return 0;
}
void large(double *p1, double *p2)
{
	if (*p1 > * p2) *p2 = *p1;
	else *p1 = *p2;
}
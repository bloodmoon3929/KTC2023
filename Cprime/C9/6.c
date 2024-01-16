#include<stdio.h>
void large(double *p1, double *p2, double *p3);
int main(void)
{
	double num_1, num_2, num_3;
	printf("첫번째 수를 기입하시오 : ");
	scanf("%lf", &num_1);
	printf("두번째 수를 기입하시오 : ");
	scanf("%lf", &num_2);
	printf("세번째 수를 기입하시오 : ");
	scanf("%lf", &num_3);
	large(&num_1, &num_2, &num_3);
	printf("num_1은 %.1lf, num_2는 %.1lf, num_3은 %.1lf입니다.",num_1,num_2,num_3);
	return 0;
}
void large(double* p1, double* p2, double* p3)
{
    double temp;

    if (*p1 > * p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    if (*p2 > * p3)
    {
        temp = *p2;
        *p2 = *p3;
        *p3 = temp;

        if (*p1 > * p2)
        {
            temp = *p1;
            *p1 = *p2;
            *p2 = temp;
        }
    }
}
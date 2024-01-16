#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double x,sum=0, sum2=0, pre=1;
	int a;

	printf("몇회 반복시킬지 기입하시오(0 또는 음수를 입력해 종료) : ");
	scanf("%d",&a);
	while (a>0)
	{
		for (int i = 1; i <= a; i++)
		{
			x = (double)i;
			sum += 1/x;
			if (i % 2 == 1)
			{
				sum2 += 1/x;
			}
			else
			{
				sum2 += -1/x;
			}
		}
		printf("%.1f %.1f\n", sum, sum2);
		printf("몇회 반복시킬지 기입하시오(0 또는 음수를 입력해 종료) : ");
		scanf("%d", &a);
	}
	printf("종료!");
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n;
	double even = 0.0;
	int even1 = 0;
	double odd = 0.0;
	int odd1 = 0;

	while (scanf("%d", &n) == 1 && n != 0)
	{
		if (n % 2 == 0)
		{
			even += n;
			++even1;
		}
		else // n % 2 is either 1 or -1
		{
			odd += n;
			++odd1;
		}
	}
	printf("짝수의 갯수는 : %d", even1);
	if (even1 > 0)
	{
		printf(" 짝수 합의 평균은 : %g", even / even1);
	}
	printf("\n");

	printf("홀수의 갯수는 : %d", odd1);
	if (odd1 > 0)
	{
		printf(" 홀수 합의 평균은 : %g", odd / odd1);
	}
	return 0;
}
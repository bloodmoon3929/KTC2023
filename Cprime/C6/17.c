#include<stdio.h>

int main(void)
{
	int year=0;
	double sum=1000000;
	while (sum-100000>0)
	{
		sum -= 100000;
		sum *= 1.08;
		year++;
	}
	printf("%d년에 %.3lf달러가 남는다. 잔액이 없어질려면 %d년이 걸린다.",year,sum,year+1);
	return 0;
}
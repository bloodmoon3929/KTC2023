#include<stdio.h>

int main(void)
{
	int year=0;
	double sum=0, sum2=0, in;
	do
	{
		sum += 100;
		sum2 += 100;
		in = sum * 0.1;
		sum2 *= 1.05;
		year++;
	} while (sum2 < sum+in);
	printf("%d년차에 단리가 %.3lf를 모으고 복리가 %.3lf모인다.",year,sum+in,sum2);
	return 0;
}
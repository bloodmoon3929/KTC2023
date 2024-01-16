#include<stdio.h>
#include <stdlib.h> 
double power(double n, int p);
int main(int argc, char* argv[])
{
	double x, xpow;
	int exp;
	printf("double형 밑수와 정수형 지수를 입력하시오\n");
	printf("그 외의 값을 누르면 종료됩니다\n");
	if (argc != 3)
		printf("전달인자수가 많거나 적습니다.");
	else
	{
		x = atof(argv[1]);
		exp = atof(argv[2]);
		xpow = power(x, exp);
		printf("%.3g의 %d승은 %.5g입니다.\n", x, exp, xpow);
	}
	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	if (n == 0 && p == 0)
	{
		printf("0의 0승은 정의되지 않았고, 1의 값을 사용중입니다.\n");
		return pow;
	}
	if (n == 0) pow = 0;
	if (p > 0)
	{
		for (int i = 1; i <= p; i++)
			pow *= n;
	}
	else if (p == 0) pow = 1;
	else
	{
		p = -p;
		for (int i = 1; i <= p; i++)
			pow /= n;
	}
	return pow;
}
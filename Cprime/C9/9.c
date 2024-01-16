#include<stdio.h>
double power(double n, int p);
int main(void)
{
    double x, xpow;
    int exp;
	printf("어떤 수와, 원하는 양의 정수 거듭제곱수를");
	printf(" 입력하시오.\n끝내려면 q를");
	printf(" 입력하시오.\n");
	while (scanf("%lf%d", &x,&exp)==2)
	{
		xpow = power(x, exp);
		printf("%.3g의 %d승은 %.5g입니다.\n",x ,exp ,xpow);
	}
	printf("거듭제곱 구하기가 재미 있었나요? --안녕!\n");
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
	else if (n==0) pow = 0;
	else if (p > 0) pow = n * power(n, p - 1);
	else if (p < 0) pow = 1/ (n*power(n, p + 1));
	else pow = 1;
	return pow;
}
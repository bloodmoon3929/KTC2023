#include<stdio.h>
#pragma warning(disable:4996)
#define pay 10.00
#define more 40
#define bonus 1.5
#define bill1 300
#define bill2 150
#define per1 0.15
#define per2 0.20
#define per3 0.25

int main(void)
{
	double time,money,tax;
	printf("일주일간 노동한 시간을 입력하시오 : ");
	scanf("%lf",&time);
	if (time<=40)
	{
		money = time * pay;
	}
	else
	{
		money = time * pay + (time - more) * pay * bonus;
	}
	if (money<=bill1)
	{
		tax = money * per1;
	}
	else if (money<=bill1+bill2)
	{
		tax = bill1 * per1+(money-bill1)*per2;
	}
	else
	{
		tax = bill1 * per1 + (bill2) * per2+(money-bill1-bill2)*per3;
	}
	printf("총소득 : %.2lf, 세금 : %.2lf, 순소득 : %.2lf",money, tax, money-tax);
	return 0;
}
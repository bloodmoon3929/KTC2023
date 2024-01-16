#include<stdio.h>
#include<stdbool.h>
#pragma warning(disable:4996)

void grass(double x);
void pay(void);
double sum = 0;
int a = 0, b = 0, c = 0;

int main(void)
{
	char button;
	printf("아티초크:a, 비트:b, 당근:c 결제:q\n");
	printf("구매 희망하는 채소를 입력하시오 : ");
	while (true)
	{
		scanf("%c", &button);
		if (button!='\n')
		{
			switch (button)
			{
			case 'a':
				grass(2.05);
				break;
			case 'b':
				grass(1.15);
				break;
			case 'c':
				grass(1.09);
				break;
			case 'q':pay();
				return 0;
			default:
				printf("아티초크:a, 비트:b, 당근:c 결제:q 중 \n");
				break;
			}
			printf("추가 구매 희망하는 채소를 입력하시오 : ");
		}
	}
	return 0;
}

void grass(double x)
{
	int pound;
	printf("파운드 단위로 구매희망 양을 기입하시오 : ");
	scanf("%d", &pound);
	if (x == 2.05)
	{
		a += pound;
	}
	else if (x == 1.15)
	{
		b += pound;
	}
	else
	{
		c += pound;
	}
	sum += (double)pound * x;
}

void pay(void)
{
	double dis = 0;
	double dil;
	if (sum >= 100)
	{
		dis = sum * 0.05;
	}
	if (a + b + c < 5)
	{
		dil = 6.5;
	}
	else if (a + b + c < 20)
	{
		dil = 14;
	}
	else
	{
		dil = 14 + (a + b + c - 20) * 0.5;
	}
	printf("아티초크 = $2.05, 비트 = $1.15, 당근 = $1.09\n");
	printf("아티초크 주문량 %d, 비트 주문량 %d, 당근 주문량 %d\n", a, b, c);
	printf("아티초크 주문비용 $%.2lf, 비트 주문비용 $%.2lf, 당근 주문비용 $%.2lf\n", (float)a * 2.05, (float)b * 1.15, (float)c * 1.09);
	printf("총 구매 합산 %.2lf\n", sum);
	printf("할인 금액 %.2lf\n", dis);
	printf("배송비 %.2lf\n", dil);
	printf("총 청구금액 %.2lf", sum - dis + dil);
}
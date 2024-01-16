#include<stdio.h>
#pragma warning(disable:4996)
#define pay1 8.75
#define pay2 9.33
#define pay3 10.00
#define pay4 11.20
#define more 40
#define bonus 1.5
#define bill1 300
#define bill2 150
#define per1 0.15
#define per2 0.20
#define per3 0.25

void star(void);
void grass(int x);

int main(void)
{
	int button;
	star();
	printf("자신의 기본급에 해당하는 번호를 선택하시오 (끝내려면 5번을 선택하시오):\n");
	printf("1) 시간당 $%-20.2f 2) 시간당 $%-20.2f\n",pay1,pay2);
	printf("3) 시간당 $%-20.2f 4) 시간당 $%-20.2f\n",pay3,pay4);
	printf("5) 종료\n");
	star();

	scanf("%d",&button);
	while (button != 5)
	{
		switch (button)
		{
		case 1:grass(pay1); break;
		case 2:grass(pay2); break;
		case 3:grass(pay3); break;
		case 4:grass(pay4); break;
		case 5:return 0;
		default:printf("다시 입력하시오. : ");
		}
		star();
		printf("자신의 기본급에 해당하는 번호를 선택하시오 (끝내려면 5번을 선택하시오):\n");
		printf("1) 시간당 $%-20.2f 2) 시간당 $%-20.2f\n", pay1, pay2);
		printf("3) 시간당 $%-20.2f 4) 시간당 $%-20.2f\n", pay3, pay4);
		printf("5) 종료\n");
		star();
		scanf("%d", &button);
	}
	return 0;
}

void star(void)
{
	for (int i = 0; i < 80; i++)
	{
		printf("*");
	}
	printf("\n");
}

void grass(int x)
{
	double time, money, tax;
	printf("일주일간 노동한 시간을 입력하시오 : ");
	scanf("%lf", &time);

	if (time <= 40)
	{
		money = time * x;
	}
	else
	{
		money = time * x + (time - more) * x * bonus;
	}
	if (money <= bill1)
	{
		tax = money * per1;
	}
	else if (money <= bill1 + bill2)
	{
		tax = bill1 * per1 + (money - bill1) * per2;
	}
	else
	{
		tax = bill1 * per1 + (bill2)*per2 + (money - bill1 - bill2) * per3;
	}
	printf("총소득 : %.2lf, 세금 : %.2lf, 순소득 : %.2lf\n", money, tax, money - tax);
}
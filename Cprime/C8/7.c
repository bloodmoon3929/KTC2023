#include<stdio.h>
#include<ctype.h>
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
char get_first(void);

int main(void)
{
	char button;
	star();
	printf("자신의 기본급에 해당하는 번호를 선택하시오 (끝내려면 q번을 선택하시오):\n");
	printf("o) 시간당 $%-20.2f s) 시간당 $%-20.2f\n", pay1, pay2);
	printf("t) 시간당 $%-20.2f f) 시간당 $%-20.2f\n", pay3, pay4);
	printf("q) 종료\n");
	star();

	while ((button = get_first()) != 'q')
	{
		switch (button)
		{
			case 'o':grass(pay1); break;
			case 's':grass(pay2); break;
			case 't':grass(pay3); break;
			case 'f':grass(pay4); break;
			case 'q':return 0;
			default:printf("다시 입력하시오. : ");
		}
		star();
		printf("자신의 기본급에 해당하는 번호를 선택하시오 (끝내려면 q번을 선택하시오):\n");
		printf("o) 시간당 $%-20.2f s) 시간당 $%-20.2f\n", pay1, pay2);
		printf("t) 시간당 $%-20.2f f) 시간당 $%-20.2f\n", pay3, pay4);
		printf("q) 종료\n");
		star();
	}
	return 0;
}
void star(void)
{
	for (int i = 0; i < 80; i++)	printf("*");
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

char get_first(void)
{
	int ch;
	while (isspace(ch = getchar()))
		continue;
	return ch;
}
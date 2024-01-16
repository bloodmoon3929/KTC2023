#include<stdio.h>
#pragma warning(disable:4996)

void grass(int x);

int main(void)
{
	int button;
	printf("독신:1, 가장:2, 합산:3, 별산:4, 종료:5");
	printf("과세 구분을 입력하시오 : ");
	scanf("%d",&button);
	while (button != '5')
	{
		switch (button)
		{
		case 1:grass(17850); break;
		case 2:grass(23900); break;
		case 3:grass(29750); break;
		case 4:grass(14875); break;
		case 5:return 0;
		default:printf("다시 입력하시오. : ");
		}
		printf("독신:1, 가장:2, 합산:3, 별산:4, 종료:5");
		printf("과세 구분을 입력하시오 : ");
		scanf("%d", &button);
	}
	return 0;
}
void grass(int x)
{
	int money,tax;
	printf("소득의 기입하시오 : ");
	scanf("%d", &money);

	if (money <= x)
	{
		tax = money * 0.15;
	}
	else
	{
		tax = x * 0.15 + (money - x) * 0.28;
	}
	printf("과세액은 %d입니다.\n",tax);
}
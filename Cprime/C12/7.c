#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int roll_n_dice(int dice, int sides);
int main(void)
{
	int dice=0, roll=0, sides=0, sum=0;
	srand(time(0));
	printf("던질 횟수를 입력하시오(끝내려면 q).\n");
	while (scanf_s("%d", &roll)==1&&roll!=113)
	{
		while (getchar() != '\n');
		printf("주사위 면 수와 던질 주사위 개수를 입력하시오(끝내려면 0).\n");
		scanf_s("%d", &sides);
		if (sides==0) break;
		scanf_s(" %d", &dice);
		while (getchar() != '\n');
		printf("%d면 주사위 %d개를 %d번 던져 얻은 결과는 다음과 같습니다.\n", sides, dice, roll);
		for (int i = 0; i < roll; i++) printf("%4d", roll_n_dice(dice, sides));
		printf("\n");
		printf("던질 횟수를 입력하시오(끝내려면 q).\n");
	}
	printf("행운을 빕니다!");
	return 0;
}
static int rollem(int sides)
{
	int roll;
	roll = rand() % sides + 1;
	return roll;
}
int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;
	if (sides < 2)
	{
		printf("면의 개수는 최소한 2가 되어야 한다.\n");
		return -2;
	}
	if (dice < 1)
	{
		printf("주사위의 개수는 최소한 1이 되어야 한다.\n");
		return -1;
	}
	for (d = 0; d < dice; d++) total += rollem(sides);
	return total;
}
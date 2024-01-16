#include<stdio.h>

int main(void)
{
	int Friend=5, week=0, count=1;

	do
	{
		Friend -= count;
		Friend *= 2;
		printf("%d주차의 친구의수는 %d\n",count, Friend);
		count++;
	} while (Friend < 150);
	return 0;
}
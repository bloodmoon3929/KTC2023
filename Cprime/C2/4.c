#include<stdio.h>

void jolly(void)
{
	printf(" jolly good ");
	return;
}

void deny(void)
{
	printf("Which nobady can deny");
	return;
}

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		printf("For he's a");
		jolly();
		printf("fellew!\n");
	}
	deny();
	return 0;
}
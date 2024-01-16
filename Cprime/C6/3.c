#include<stdio.h>

int main(void)
{
	for (int i = 1; i < 7; i++)
	{
		int alp = 70;
		for (int j = 0; j < i; j++)
		{
			printf("%c",(char)alp);
			alp--;
		}
		printf("\n");
	}
	return 0;
}
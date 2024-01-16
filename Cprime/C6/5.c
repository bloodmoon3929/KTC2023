#include<stdio.h>

int main(void)
{
	char alp=65;
	char min;
	for (int i = 1; i < 6; i++)
	{
		min = (int)alp-5;
		for (int x = 0; x <= 4; x++)
		{
			if ((int)min < 65)
			{
				printf(" ");
			}
			else
			{
				printf("%c", min);
			}
			min++;

		}
		printf("%c", alp);
		for (int x = 0; x <= 4; x++)
		{
			min--;
			if ((int)min >= 65)
			{
				printf("%c", min);
			}
			else
			{
				printf(" ");
			}
		}
		alp++;
		printf("\n");
	}
	return 0;
}
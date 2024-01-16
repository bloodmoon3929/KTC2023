#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char line;
	int count = 0;
	printf("문장을 입력하시오 : ");
	while((line = getchar()) != '#')
	{
		if (line != '#')
		{
			count++;
			int a=putchar(line);
			printf(": %d,",a);
			if (count % 8 == 0)
			{
				printf("\n");
			}
		}
		
	}
	return 0;
}
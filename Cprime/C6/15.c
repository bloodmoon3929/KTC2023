#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main(void)
{
	char line[256];
	printf("문장을 입력하시오 : ");
	for (int j = 0; j < 256; j++)
	{
		scanf("%c", &line[j]);
		if (line[j] == '\n')
		{
			line[j] = NULL;
			break;
		}
	}
	int a = strlen(line);
	for (int i = a-1; i >= 0; i--)
	{
		printf("%c",line[i]);
	}
	return 0;
}
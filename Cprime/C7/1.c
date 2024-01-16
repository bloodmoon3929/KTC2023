#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char line;
	int a=0,b=0,c=0;
	printf("문장을 입력하시오 : ");
	while((line = getchar()) != '#')
	{
		if (line == ' ')
		{
			a++;
		}
		else if (line == '\n')
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	printf("공백문자는 %d번, 계행문자는 %d번, 그 외 나머지 문자는 %d번 있었습니다.",a,b,c);
	return 0;
}
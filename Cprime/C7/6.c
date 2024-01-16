#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char text;
	int a=0, b=0;
	printf("문장을 입력하시오 : ");
	while ((text = getchar()) != '#')
	{
		if (text == 'e')
		{
			a = 2;
		}
		if (text == 'i')
		{
			if (a == 1)
			{
				b++;
			}
		}
		a--;
	}
	printf("문자 시퀀스 ei는 %d번 나타남",b);
	return 0;
}
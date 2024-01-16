#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char text;
	int a=0, b=0;
	printf("문장을 입력하시오 : ");
	while ((text=getchar())!='#')
	{
		switch (text)
		{
			case '.' : 
				putchar('!');
				a++;
				break;
			case '!':
				putchar('!');
				putchar('!');
				b++;
				break;
			default :
				putchar(text);
		}
	}
	printf("\n.은 !로 %d번 대체되었습니다.",a);
	printf("\n!은 !!로 %d번 대체되었습니다.", b);
	return 0;
}
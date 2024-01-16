#include<stdio.h>
#include<ctype.h>
int my_atoi(char);
int main(void)
{
	char text;
	printf("정수 값을 입력해 주세요(EOF시 종료) : ");
	while ((text = getchar()) != EOF)
	{
		if (my_atoi(text) == 0)
		{
			printf("숫자가 아닙니다\n");
		}
		else
		{
			printf("입력한 값은 %d입니다.\n",(int)text-48);
		}
		while ((text = getchar()) != '\n' && text != EOF);
		printf("정수 값을 입력해 주세요(EOF시 종료) : ");
	}
	return 0;
}
int my_atoi(char text)
{
	if (isdigit(text) == 0)
	{
		return isdigit(text);
	}
	else
	{
		return text;
	}
}
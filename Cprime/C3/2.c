#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int code;
	char ASCII;
	printf("66같은 ASCII코드를 입력하시오 : ");
	scanf("%d", &code);
	ASCII = (char)code;
	printf("%d에 해당하는 문자는 %c입니다.", ASCII, ASCII);
	return 0;
}
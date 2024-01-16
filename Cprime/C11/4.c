#include<stdio.h>
#include<ctype.h>
#define LEN 10
void inputchar(char arr[]);
int main(void)
{
	char ch_arr[LEN];
	inputchar(ch_arr);
	printf("배열 ch_arr : %s",ch_arr);
	return 0;
}
void inputchar(char *arr)
{
	int count = 0;
	char ch;
	printf("문자를 입력하시오 : ");
	while ((ch = getchar()) == EOF || isspace(ch)) 			continue;
	*arr++ = ch;
	count++;
	while ((ch=getchar())!=EOF||!isspace(ch))
	{
		*arr++ = ch;
		count++;
		if (isspace(ch) || count >= LEN-1)
		{
			*arr = '\0';
			break;
		}
	}
}

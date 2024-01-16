#include<stdio.h>
#include<ctype.h>
void inputchar(char arr[], int);
int main(void)
{
	char ch_arr[10];
	int len = sizeof(ch_arr) / sizeof(char);
	inputchar(ch_arr, len);
	printf("배열 ch_arr : %s",ch_arr);
	return 0;
}
void inputchar(char *arr, int len)
{
	int count = 0;
	char ch;
	printf("%d개의 문자를 입력하시오 : ",len);
	while ((ch = getchar()) == EOF || isspace(ch)) 			continue;
	*arr++ = ch;
	count++;
	while ((ch=getchar())!=EOF||!isspace(ch))
	{
		*arr++ = ch;
		count++;
		if (isspace(ch) || count >= len-1)
		{
			*arr = '\0';
			break;
		}
	}
}
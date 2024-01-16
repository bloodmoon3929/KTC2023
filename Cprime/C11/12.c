#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void)
{
	char ch;
	int word_count=0, up_count=0, low_count=0;
	int punct_count=0, digit_count = 0;
	int cheak=false;
	printf("문장을 입력하시오(끝내고 싶으면 EOF)\n");
	while ((ch=getchar())!=EOF)
	{
		if (isspace(ch)&&cheak)
		{
			cheak = false;
			word_count++;
		}
		else cheak = true;
		if (isupper(ch)) up_count++;
		if (islower(ch)) low_count++;
		if (ispunct(ch)) punct_count++;
		if (isdigit(ch)) digit_count++;
	}
	printf("단  어의 수 : %3d\n",word_count);
	printf("대문자의 수 : %3d\n",up_count);
	printf("소문자의 수 : %3d\n",low_count);
	printf("구두점의 수 : %3d\n",punct_count);
	printf("숫  자의 수 : %3d\n",digit_count);
	return 0;
}

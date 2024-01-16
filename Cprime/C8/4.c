#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int text, total_ct = 0, ct=0;
	while ((text = getchar()) != EOF)
	{
		if (isspace(text)) ct++;
		else if (!ispunct(text)) total_ct++;
		if (text == '\n')
		{
			printf("단어당 평균 글자수는 %.1f\n", (float)total_ct / (float)ct);
			total_ct = 0; ct = 0;
		}
	}
	return 0;
}
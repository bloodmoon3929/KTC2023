#include<stdio.h>
#include<ctype.h>
int Is_text(int text_1);
int main(void)
{
	int text;
	while ((text = getchar()) != EOF)
	{
		printf("%d, ",Is_text(text));
		if (text == '\n') printf("\n");
	}
	return 0;
}
int Is_text(int text_1)
{
	if (isupper(text_1)) return text_1 - 64;
	else if (islower(text_1)) return text_1 - 96;
	else return -1;
}
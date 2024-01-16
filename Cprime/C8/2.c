#include<stdio.h>

int main(void)
{
	int text, count = 0;
	while ((text = getchar()) != EOF)
	{
		if (text == '\n') printf("\\n \n");
		else if (text == '\t') printf("\\t ");
		else
		{
			printf("(%c, ", text);
			printf("%d) ", text);
		}
		count++;
		if (count == 10)
		{
			printf("\n");
			count = 0;
		}
	}
	return 0;
}
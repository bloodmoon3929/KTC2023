#include<stdio.h>
#include<ctype.h>

char get_first(void);
int main(void)
{
	int CHAR = get_first();
	printf("%c\n",CHAR);
	return 0;
}
char get_first(void)
{
	int ch;
	while (isspace(ch = getchar()))
		continue;
	return ch;
}
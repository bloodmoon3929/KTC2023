#include <stdio.h>
#include <ctype.h>
#include<stdbool.h>
int main(int argc, char* argv[])
{
	char mode = 'p';
	int active = true;
	int ch;
	if (argc > 2)
	{
		printf("우선-p, -u, -l중에 입력해 주세요\n");
		active = false; 
	}
	else if (argc == 2)
	{
		if (argv[1][0] != '-')
		{
			printf("우선-p, -u, -l중에 입력해 주세요\n");
			active = false;
		}
		else
			switch (argv[1][1])
			{
			case 'p':
			case 'u':
			case 'l': mode = argv[1][1];
				break;
			default: printf("%s는 잘못된 입력입니다. ", argv[1]);
				printf("기본 모드인 -p로 대체됩니다.\n");
			}
	}
	if (active)
		while ((ch = getchar()) != EOF)
		{
			switch (mode)
			{
			case 'p': putchar(ch);
				break;
			case 'u': putchar(toupper(ch));
				break;
			case 'l': putchar(tolower(ch));
			}
		}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int ch1, ch2;
	FILE* f1;
	FILE* f2;
	if (argc != 3)
	{
		printf("사용법 : %s\\file1, file2\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((f1 = fopen(argv[1], "r")) == NULL)
	{
		printf("%s파일을 열 수 없습니다.\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((f2 = fopen(argv[2], "r")) == NULL)
	{
		printf("%s파일을 열 수 없습니다.\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	ch1 = getc(f1);
	ch2 = getc(f2);
	while (ch1 != EOF || ch2 != EOF)
	{
		while (ch1 != EOF && ch1 != '\n')
		{
			putchar(ch1);
			ch1 = getc(f1);
		}
		if (ch1 != EOF)
		{
			putchar('\n');
			ch1 = getc(f1);
		}
		while (ch2 != EOF && ch2 != '\n')
		{
			putchar(ch2);
			ch2 = getc(f2);
		}
		if (ch2 != EOF)
		{
			putchar('\n');
			ch2 = getc(f2);
		}
	}
	if (fclose(f1) != 0 || fclose(f2) != 0)
		fprintf(stderr, "파일을 닫는 데 에러가 발생했습니다.\n");
	return 0;
}
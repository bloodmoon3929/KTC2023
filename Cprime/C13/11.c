#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	FILE* fp;
	char line[100];
	if (argc != 3)
	{
		fprintf(stderr, "사용법 : 문자열 %s\\파일이름\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "%s파일을 열 수 없습니다.\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, 100, fp) != NULL)
	{
		if (strstr(line, argv[1]) != NULL)
			fputs(line, stdout);
	}
	fclose(fp);
	return 0;
}
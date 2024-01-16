#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int ch, i;
	FILE* ffile;
	if (argc < 2)
	{
		fprintf(stderr, "사용법: C:\\Users\\gnbup\\Desktop\\ktc\\filename\n");
		exit(EXIT_FAILURE);
	}
	for (i = 1; i < argc; i++)
	{
		if ((ffile = fopen(argv[i], "r")) == NULL)
		{
			fprintf(stderr, "%s 파일을 열 수 없습니다.\n", argv[i]);
			exit(EXIT_FAILURE);
		}
		fprintf(stdout, "%s 파일의 내용은.\n", argv[i]);
		while ((ch = getc(ffile)) != EOF) putc(ch,stdout);
		printf("\n");
		if (fclose(ffile) != 0)
		{
			fprintf(stderr, "파일을 닫는 데 에러가 발생했다.\n");
			exit(EXIT_FAILURE);
		}
	}
	return 0;
}
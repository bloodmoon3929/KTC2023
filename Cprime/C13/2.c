#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int ch;
	FILE* fcopy, *fpaste;
	if (argc < 3)
	{
		fprintf(stderr,"사용법: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fcopy = fopen(argv[1], "rb")) == NULL)
	{
		fprintf(stderr,"%s 파일을 열 수 없습니다.\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fpaste = fopen(argv[2], "wb")) == NULL)
	{
		fprintf(stderr, "%s 파일을 열 수 없습니다.\n", argv[2]);
		exit(3);
	}
	while ((ch = getc(fcopy)) != EOF)
	{
		putc(ch, fpaste);
	}
	if (fclose(fcopy) != 0 || fclose(fpaste) != 0)
	{
		fprintf(stderr,"파일을 닫는 데 에러가 발생했다.\n");
		exit(EXIT_FAILURE);
	}
	printf("정상 동작 하였음.");
	return 0;
}
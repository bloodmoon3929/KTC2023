#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
	int ch;
	char copy[100], paste[100];
	FILE* fcopy, *fpaste;
	printf("복사할 파일의 위치를 입력하시오 : ");
	fgets(copy, sizeof(copy), stdin);
	copy[strcspn(copy, "\n")] = '\0';
	printf("붙여 넣을 파일의 위치를 입력하시오 : ");
	fgets(paste, sizeof(paste), stdin);
	paste[strcspn(paste, "\n")] = '\0';
	if (copy==NULL||paste==NULL)
	{
		printf("사용법: C:\\Users\\gnbup\\source\\repos\\Project15\\Debug\\filename\n");
		exit(EXIT_FAILURE);
	}
	if ((fcopy = fopen(copy, "r")) == NULL)
	{
		fprintf(stderr,"%s 파일을 열 수 없습니다.\n", copy);
		exit(EXIT_FAILURE);
	}
	if ((fpaste = fopen(paste, "w")) == NULL)
	{
		fprintf(stderr, "%s 파일을 열 수 없습니다.\n", paste);
		exit(3);
	}
	while ((ch = getc(fcopy)) != EOF)
	{
		putc(toupper(ch), fpaste);
	}
	if (fclose(fcopy) != 0 || fclose(fpaste) != 0)
	{
		fprintf(stderr,"파일을 닫는 데 에러가 발생했다.\n");
		exit(EXIT_FAILURE);
	}
	printf("정상 동작 하였음.");
	return 0;
}
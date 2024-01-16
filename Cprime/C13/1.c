#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ch;
	char temp[100];
	FILE* fp;
	unsigned long count = 0;
	printf("파일의 위치를 입력하시오 : ");
	fgets(temp, sizeof(temp), stdin);
	temp[strcspn(temp, "\n")] = '\0';
	if (temp==NULL)
	{
		printf("사용법: C:\\Users\\gnbup\\source\\repos\\Project15\\Debug\\filename\n");
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(temp, "r")) == NULL)
	{
		printf("%s 파일을 열 수 없습니다.\n", temp);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("%s 파일에는 %ld개의 문자가 들어 있습니다.\n", temp , count);
	return 0;
}
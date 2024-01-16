#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE* fp;
	int count = 0,choose=1, ch;
	char temp[100];
	char lines[100][100];
	printf("파일의 위치를 입력하시오 : ");
	fgets(temp, sizeof(temp), stdin);
	temp[strcspn(temp, "\n")] = '\0';
	if (temp[0] == '\0')
	{
		printf("사용법: C:\\Users\\gnbup\\Desktop\\ktcg\\filename\n");
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(temp, "r")) == NULL)
	{
		fprintf(stderr, "파일을 열 수 없습니다.\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(lines[count], sizeof(lines[count]), fp) != NULL)
		count++;
	printf("0~%d 범위 안에서 선택 : ", count-1);
	scanf_s("%d", &choose);
	while (choose >= 0 && choose < count)
	{
		if ((fp = fopen(lines[choose], "r")) == NULL)
		{
			fprintf(stderr, "파일을 열 수 없습니다.\n");
			exit(EXIT_FAILURE);
		}
		while ((ch = getc(fp)) != EOF)
			putc(ch, stdout);
		printf("0~%d 범위 안에서 선택 (범위 초과시 종료) :", count-1);
		scanf_s("%d", &choose);
	}
	if (fclose(fp) != 0)
		fprintf(stderr, "파일을 닫는 데 에러가 발생했습니다.\n");
	return 0;
}
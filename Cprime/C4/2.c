#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main(void)
{
	char name[30];

	printf("이름(성씨 제외)을 기입해 주세요 : ");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s",strlen(name)+3, name);
	return 0;
}
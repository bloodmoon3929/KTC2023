#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char name[30];
	char fname[30];

	printf("이름(성씨 제외)을 기입해 주세요 : ");
	scanf("%s", name);
	printf("성씨을 기입해 주세요 : ");
	scanf("%s", fname);

	printf("귀하의 이름은 %s %s", fname, name);
	return 0;
}
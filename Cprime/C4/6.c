#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

void space(int x)
{
	for (int i = 1; i < x; i++)
	{
		printf(" ");
	}
}

int main(void)
{
	char name[30], fname[30];

	printf("이름(성씨 제외)을 기입해 주세요 : ");
	scanf("%s", name);
	printf("성씨을 기입해 주세요 : ");
	scanf("%s", fname);

	printf("%s %s\n", name, fname);
	space(strlen(name));
	printf("%d ", (int)strlen(name));
	space(strlen(fname));
	printf("%d \n", (int)strlen(fname));
	printf("%s %s\n", name, fname);
	printf("%d ", (int)strlen(name));
	space(strlen(name));
	printf("%d ", (int)strlen(fname));
	space(strlen(fname));

	return 0;
}
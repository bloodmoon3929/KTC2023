#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main(void)
{
	char word[30],rev[30];

	printf("단어 하나를 입력하시오 :");
	scanf("%s", &word);
	int a =strlen(word);
	for (int i=0; i<a; i++)
	{
		rev[a-i-1] = word[i];
	}
	for (int j = 0; j < a; j++)
	{
		printf("%c", rev[j]);
	}
	return 0;
}
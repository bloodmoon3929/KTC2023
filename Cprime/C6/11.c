#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int num[8];

	printf("정수를 8번 입력하시오 :");
	for (int i = 0; i <8 ; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int j = 7; j >=0; j--)
	{
		printf("%d", num[j]);
	}
	return 0;
}
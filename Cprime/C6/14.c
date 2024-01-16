#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double a[8], b[8];
	printf("정수를 8번 입력하시오 :");
	for (int i = 0; i < 8; i++)
	{
		scanf("%lf", &a[i]);
	}
	b[0] = a[0];
	for (int j = 1; j < 8; j++)
	{
		b[j] = b[j - 1] + a[j];
	}
	for (int x = 0; x < 8; x++)
	{
		printf("%2.2lf ", a[x]);
	}
	printf("\n");
	for (int x = 0; x < 8; x++)
	{
		printf("%2.2lf ", b[x]);
	}
	return 0;
}
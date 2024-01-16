#include<stdio.h>
#pragma warning(disable:4996)

int cubic(int x)
{
	x = x * x * x;
	return x;
}

int main(void)
{
	int num;

	printf("세제곱할 숫자를 기입하시오 : ");
	scanf("%d",&num);
	
	printf("%d의 세제곱은 %d",num,cubic(num));

	return 0;
}
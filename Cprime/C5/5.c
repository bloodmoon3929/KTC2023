#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int count, sum, day;

	count = 0;
	sum = 0;

	printf("일한 날짜를 입력하시오 : ");
	scanf("%d",&day);
	while (count++ < day) 
		sum = sum + count;
	printf("합=%d\n",sum);

	return 0;
}
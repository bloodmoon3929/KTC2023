#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int start, end;
	printf("정수값의 시작값을 입력하시오 : ");
	scanf("%d",&start);
	printf("정수값의 끝값을 입력하시오 : ");
	scanf("%d", &end);
	for (int i = start; i <= end; i++)
	{
		printf("정수 :%3d, 제곱 :%4d, 세제곱 :%4d\n",i,i*i,i*i*i);
	}
	return 0;
}
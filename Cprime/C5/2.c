#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int num;
	printf("숫자를 기입하시오 : ");
	scanf("%d", &num);

	for(int i=0; i<11; i++)
	{
		printf("%d ",num);
		num++;
	}
	return 0;
}
#include<stdio.h>
#pragma warning(disable:4996)

int main(void) 
{
	int quart;
	long double mass = 3.0e-23;
	printf("퀴트단위로 물의 양을 기입하시오 : ");
	scanf("%d",&quart);
	printf("%d퀴트안에 물의 분자의 개수는 : %e",quart,quart*950/mass);
	return 0;
}
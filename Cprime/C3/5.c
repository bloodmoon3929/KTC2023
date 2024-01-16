#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int age;
	long sec = 3.156e+07;
	printf("본인의 나이를 기입하시오 : ");
	scanf("%d", &age);
	printf("나이를 초로 환산하면 : %ld",sec*age);
	return 0;
}
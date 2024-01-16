#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	float inc;
	printf("변환하고자 하는 인치의 수를 기입하시오 : ");
	scanf("%f", &inc);
	printf("%0.0f인치는 %0.2fcm입니다", inc, inc*2.54);
	return 0;
}
#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	float a;
	printf("부동수소점 수를 입력하시오 : ");
	scanf("%f",&a);
	printf("고정소수점 표기 : %f\n",a);
	printf("지수 표기 : %e\n",a);
	printf("p 표기 : %a\n",a);
	return 0;
}
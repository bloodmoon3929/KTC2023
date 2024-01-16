#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	float cm;
	printf("센티미터 단위로 키를 입력하시오 : ");
	scanf("%f", &cm);
	while (cm > 0)
	{
		printf("%.1f센티미터는 %.0f피트, %.1f인치입니다.\n",cm,cm*100/3048 , cm*100/254);
		printf("센티미터 단위로 키를 입력하시오(끝내려면 <=0) : ");
		scanf("%f", &cm);
	}
	printf("안녕!");
	return 0;
}
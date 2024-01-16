#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int in;
	float cm = 2.54;
	printf("인치 단위로 키를 기입하시오 : ");
	scanf("%d", &in);
	printf("%d인치는 %f입니다.", in, in *cm);
	return 0;
}
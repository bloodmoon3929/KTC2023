#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	float in, ft;
	char name[10];

	printf("이름(성씨 제외)을 기입해 주세요 : ");
	scanf("%s", name);
	printf("인치 단위의 키를 기입해 주세요 : ");
	scanf("%f", in);

	ft = in / 12;

	printf("%s씨, 당신의 키는 %.3f 피트 입니다\n", name,ft);
	

	return 0;
}
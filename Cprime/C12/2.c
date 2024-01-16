#include<stdio.h>
static int record_mode=0;
static double record_distance;
static double record_oil;
int trash;

void set_mode(int set_mode)
{
	if (set_mode != 0 && set_mode != 1)
	{
		printf("모드 지정이 잘못되었습니다.");
		if(record_mode==1) printf(" 모드 1 (미국식)을 사용합니다.\n");
		else printf(" 모드 0 (영국식)을 사용합니다.\n");
	}else 	record_mode = set_mode;
}
void get_info()
{
	if (record_mode == 0) printf("주행한 거리를 킬로미터 단위로 입력하시오: ");
	else printf("주행한 거리를 마일 단위로 입력하시오: ");
	scanf_s("%lf", &record_distance);
	while ((trash = getchar()) != '\n');
	if (record_mode == 0) printf("소비한 휘발유의 양을 리터 단위로 입력하시오: ");
	else printf("소비한 휘발유의 양을 갤런 단위로 입력하시오: ");
	scanf_s("%lf", &record_oil);
	while ((trash = getchar()) != '\n');
}
void show_info()
{
	double dis_per_oil;
	if (record_mode==0)
	{
		dis_per_oil = record_oil*100/record_distance;
		printf("유럽식: 100킬로미터당 %.2lf 리터입니다.\n",dis_per_oil);
	}
	else
	{
		dis_per_oil = record_distance/record_oil;
		printf("미국식: 겔런당 %.1lf 마일입니다.\n", dis_per_oil);
	}
}
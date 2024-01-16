#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int day;
	printf("일자를 기입하시오 : ");
	scanf("%d", &day);
	while (day > 0)
	{
		printf("%d일은 %d주, %d일입니다.",day, day/7, day % 7);
		scanf("%d", &day);
	}
	return 0;
}
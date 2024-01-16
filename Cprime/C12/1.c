#include <stdio.h>

int critic(void);
int main(void)
{
	int trash;
	int units = 0;
	printf("버터 한 통 가격이 몇 파운드인지 아세요?\n");
	scanf("%d", & units);
	while (units != 56) units=critic();
	printf("미리 가격을 알고 있었군요!\n");
	return 0;
}
int critic(void)
{
	int units;
	printf("틀렸습니다! 다시 맞춰 보세요.\n");
	scanf("%d", &units);
	return units;
}
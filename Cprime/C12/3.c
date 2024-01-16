#include <stdio.h>
#include "3a.h"

int main(void)
{
	int pre_mode = 0;
	int mode;
	double distance, oil;
	printf("유럽식 모드는 0, 미국식 모드는 1을 입력하시오: ");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode, &pre_mode);
		get_info(mode,&distance, &oil);
		show_info(mode, &distance, &oil);
		printf("유럽식 모드는 0, 미국식 모드는 1을 입력하시오");
		printf("(끝내려면 -1): ");
		scanf_s("%d", &mode);
	}
	printf("종료.\n");
	return 0;
}
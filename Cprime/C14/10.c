#pragma warning(disable:4996)
#include <stdio.h>
int first(void);
int second(void);
int third(void);
int main(void)
{
	int (*pf[3])() = { first, second, third};
	int ans;
	int sel;

	printf("0~3 사이의 값 입력 (그 외의 수 입력시 종료):\n");
	printf("0) 1을 반환, 1) 2를 반환, 2) 3을 반환\n");
	while (scanf("%d", &sel) && sel >= 0 && sel <= 2)
	{
		ans = (*pf[sel])();
		printf("반환값은 : %d\n", ans);
		printf("0~3 사이의 값 입력 (그 외의 수 입력시 종료):\n");
		printf("0) 1을 반환, 1) 2를 반환, 2) 3을 반환\n");
	}
	return 0;
}
int first(void){return 1; }
int second(void){ return 2;}
int third(void){return 3;}
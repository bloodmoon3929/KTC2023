#include <stdio.h>
#define HMEAN(X,Y) (2*X*Y)/(X+Y)
int main(void)
{
	double x, y, ans;
	puts("한 쌍의 숫자를 기입하시오.");
	scanf_s("%lf %lf", &x, &y);
	ans = HMEAN(x, y);
	printf("%g와 %g의 조화평균은 %g입니다.\n", x, y, ans);
	return 0;
}
#include<stdio.h>
#pragma warning(disable:4996)


int main(void)
{
	int a=0, b=0, sum = 0;
	printf("정수로 하한과 상한을 입력하시오: ");
	scanf("%d %d", &a, &b);
	while (a != b || a < b)
	{
		a *= a;
		b *= b;
		for (int i = a; i <= b; i++)
		{
			sum = sum + i;
		}
		printf("%d부터 %d까지, 제곱들의 합은 %d\n", a, b, sum);
		printf("정수로 하한과 상한을 입력하시오: ");
		scanf("%d %d", &a, &b);
	}
	printf("종료!");
	return 0;
}
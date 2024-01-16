#include<stdio.h>
void Fibonacci(int n);
int main(void)
{
    int n_th;
	printf("몇 번째까지의 피보나치 수열을 구할지 입력하시오. : ");
	scanf("%d", &n_th);
	printf("\n");
	Fibonacci(n_th);
	return 0;
}
void Fibonacci(int n)
{
	int pre_1=1, pre_2=0, sum=1;
	for (int i = 1; i <= n; i++)
	{
		printf("%4d번째 피보나치 수열은 %d입니다. \n", i, sum);
		sum = pre_1 + pre_2;
		pre_2 = pre_1;
		pre_1 = sum;
	}
}
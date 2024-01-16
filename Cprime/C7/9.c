#include<stdio.h>
#include <stdbool.h>
#pragma warning(disable:4996)

int main(void)
{
	int limit, num, div;
	bool prime=true;

	printf("정수를 입력하시오 : ");
	scanf("%d", &limit);
	if (limit > 1)
		printf("%d보다 작거나 같은 소수은 : ", limit);
	else
		printf("1보다 작거나 같은 소수은 없습니다.");
	for (num = 2; num <= limit; num++)
	{
		for (div = 2, prime = true; (div*div) <= num; div++)
		if (num % div == 0)
		{
			prime = false;
		}
		if (prime)
		{
			printf("%d, ", num);
		}
	}
	return 0;
}
#include<stdio.h>
void to_base_n(unsigned long n, int radix);
int main(void)
{
	unsigned long number;
	int radix;
	printf("정수 하나를 입력하시오(끝내려면 q) : ");
	while (scanf("%ul", &number) == 1)
	{
		printf("몇 진법으로 변환할지 입력하시오(2-10) : ");
		scanf("%d", &radix);
		if (radix < 2 || radix > 10)
		{
			printf("2-10 사이의 값을 입력해주세요.\n");
			printf("정수 하나를 입력하시오(끝내려면 q) : ");
			continue;
		}
		printf("%d진수 표기 : ", radix);
		to_base_n(number, radix);
		putchar('\n');
		printf("정수 하나를 입력하시오(끝내려면 q) : ");
	}
	printf("종료!\n");
	return 0;
}
void to_base_n(unsigned long n, int radix)
{
	int r;
	r = n % radix;
	if (n >= radix)
		to_base_n(n / radix, radix);
	putchar(r+'0');
	return;
}
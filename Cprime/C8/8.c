#include<stdio.h>
#include<ctype.h>

void calculate(int choose);
char get_first(void);
float get_float(void);

int main(void)
{
	char button;
	printf("원하는 연산에 해당하는 문자를 선택하시오(끝내려면 q):\n");
	printf("a, add(덧셈)                s. subtract(뺄셈)\n");
	printf("m. multiply(곱셈)           d. divide(나눗셈)\n");
	printf("q. quit(종료)\n");

	while ((button = get_first()) != 'q')
	{
		switch (button)
		{
			case 'a': calculate(1); break;
			case 's': calculate(2); break;
			case 'm': calculate(3); break;
			case 'd': calculate(4); break;
			case 'q': continue;
			default:printf("다시 입력하시오. : ");
		}
		printf("원하는 연산에 해당하는 문자를 선택하시오(끝내려면 q):\n");
		printf("a, add(덧셈)                s. subtract(뺄셈)\n");
		printf("m. multiply(곱셈)           d. divide(나눗셈)\n");
		printf("q. quit(종료)\n");
	}
	printf("종료!");
	return 0;
}
char get_first(void)
{
	int ch;
	while (isspace(ch = getchar()))
		continue;
	return ch;
}
void calculate(int choose)
{
	float f_num, s_num, sum=0;
	printf("첫 번째 수를 입력하시오: ");
	f_num = get_float();
	printf("두 번째 수를 입력하시오: ");
	s_num = get_float();
	while (choose == 4&&s_num==0)
	{
		printf("0이 아닌 다른 수를 입력하시오: ");
		s_num = get_float();
	}
	if (choose == 1) printf("%.1f + %.1f = %.1f\n", f_num, s_num, f_num + s_num);
	if (choose == 2) printf("%.1f - %.1f = %.1f\n", f_num, s_num, f_num - s_num);
	if (choose == 3) printf("%.1f * %.1f = %.1f\n", f_num, s_num, f_num * s_num);
	if (choose == 4) printf("%.1f / %.1f = %.1f\n", f_num, s_num, f_num / s_num);
}
float get_float(void)
{
	float input;
	char ch;
	while (scanf("%f", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(": 수가 아닙니다.\n2.5,-178E8, 3과 같은 수를 입력하시오: ");
	}
	return input;
}
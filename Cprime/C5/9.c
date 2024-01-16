#include<stdio.h>
#pragma warning(disable:4996)

void Temperatures(double fah)
{
	const double cel=5.0/9.0*(fah-32.0) , abs = cel+273.16;
	printf("화씨온도:%.2lf\n", fah);
	printf("섭씨온도:%.2lf\n", cel);
	printf("절대온도:%.2lf\n", abs);
}

int main(void)
{
	double a;
	printf("온도(화씨)를 기입하시오 : ");
	scanf("%lf", &a);
	do
	{
		Temperatures(a);
		printf("온도(화씨)를 기입하시오 (q또는 수치형이 아닌 값입력시 종료) : ");
	} while (scanf("%lf", &a) == 1);

	return 0;
}
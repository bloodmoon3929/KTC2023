#include<stdio.h>
#pragma warning(disable:4996)
#include<float.h>

int main(void)
{
	double dou = 1.0/3.0;
	float flo = 1.0/3.0;

	printf("double의 값 : %.4f, %.12f, %.16f\n", dou, dou, dou);
	printf(" float의 값 : %.4f, %.12f, %.16f\n", flo, flo, flo);
	
	printf("DBL_DIG(10진수의 정밀도)의 값 : %d\n", DBL_DIG);
	printf("FLT_DIG(10진수의 정밀도)의 값 : %d", FLT_DIG);
	
	return 0;
}

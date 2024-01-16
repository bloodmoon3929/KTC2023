#include<stdio.h>
void copy_arr(double[], double[], int);
void copy_ptr(double[], double[], int);
void copy_reverse_ptr(double[], double[], double[]);
void show_arr(double[]);
int main(void)
{
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5], target2[5], target3[5];
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_reverse_ptr(target3, source, source + 5);
	printf("	소스 배열 : ");
	show_arr(source);
	printf("\n 첫번째 타겟 배열 : ");
	show_arr(target1);
	printf("\n 두번째 타겟 배열 : ");
	show_arr(target2);
	printf("\n 세번쨰 타겟 배열 : ");
	show_arr(target3);
	return 0;
}
void copy_arr(double* paste, double* copy, int len)
{
	for (int i = 0; i < len; i++)paste[i] = copy[i];
}
void copy_ptr(double* paste, double* copy, int len)
{
	for (int i = 0; i < len; i++)*paste++= *copy++;
}
void copy_reverse_ptr(double* paste, double* copy, double *end)
{
	while (copy<end)*paste++ = *copy++;
}
void show_arr(double* show_arr)
{
	printf("(");
	for (int i = 0; i < 5; i++)printf("%g ", show_arr[i]);
	printf(")\n");
}
#include<stdio.h>
void copy_arr(double[], double[], int);
void show_arr(double[],int);
int main(void)
{
	double source[7] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double target[3];
	int len = sizeof(target) / sizeof(double);
	copy_arr(target,source+2,3);
	printf("target 배열 : ");
	show_arr(target,len);
	return 0;
}
void copy_arr(double* paste, double* copy, int len)
{
	for (int i = 0; i < len; i++)paste[i] = copy[i];
}
void show_arr(double* show_arr,int len)
{
	printf("(");
	for (int i = 0; i < len; i++)printf("%g ", show_arr[i]);
	printf(")\n");
}
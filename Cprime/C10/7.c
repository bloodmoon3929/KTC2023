#include<stdio.h>
void copy_arr(double[], double[], int);
void show_arr(double[],int);
int main(void)
{
	double source[3][4] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10,11.11,12.12 };
	double target[3][4];
	int row = sizeof(source) / sizeof(source[0]);
	int col = sizeof(source[0]) / sizeof(source[0][0]);
	for (int i = 0; i < row; i++)copy_arr(target[i], source[i], col);
	printf("source 배열:\n");
	for (int i = 0; i < row; i++)show_arr(source[i],col);
	printf("target 배열:\n");
	for (int i = 0; i < row; i++)show_arr(target[i],col);
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
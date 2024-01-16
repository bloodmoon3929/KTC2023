#include<stdio.h>
void double_arr(double[], int);
void show_arr(double[],int);
int main(void)
{
	double arr[3][5];
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)arr[i][j] = i + j;
	}
	printf("초기화 시킨값\n");
	for (int k = 0; k < row; k++)show_arr(arr[k], col);
	for (int k = 0; k < row; k++)double_arr(arr[k], col);
	printf("2배 시킨값\n");
	for (int k = 0; k < row; k++)show_arr(arr[k], col);
	return 0;
}
void double_arr(double *arr, int col)
{
	for (int j = 0; j < col; j++)arr[j] = arr[j]*2;
}
void show_arr(double *show_arr ,int col)
{
	printf("(");
	for (int i = 0; i < col; i++)printf("%3g ", show_arr[i]);
	printf(")\n");
}
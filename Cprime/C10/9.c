#include<stdio.h>
void copy_arr(int row, int col, double (*copy)[5],double (*paste)[5]);
void show_arr(double(*arr)[5],int,int);
int main(void)
{
	double source[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	double target[3][5];
	int row = sizeof(source) / sizeof(source[0]);
	int col = sizeof(source[0]) / sizeof(source[0][0]);
	copy_arr(row,col,source,target);
	printf("target 배열 : \n");
	show_arr(target,row,col);
	return 0;
}
void copy_arr(int row, int col, double(*copy)[5], double(*paste)[5])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)paste[i][j] = copy[i][j];
	}
}
void show_arr(double (*show_arr)[5],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		printf("(");
		for (int j = 0; j < col; j++)printf("%3g ", show_arr[i][j]);
		printf(")\n");
	}
}
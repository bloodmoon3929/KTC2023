#include<stdio.h>
double col_aver(double arr[], int col);
double aver(double(*arr)[5],int,int);
double max(double(*arr)[5], int, int);
void show_arr(double(*arr)[5], int, int);
int main(void)
{
	double arr[3][5];
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < row; i++)
	{
		printf("%d열의 변수 5개를 입력하시오 : ", i+1);
		for (int j = 0; j < col; j++)
		{
			while (scanf("%lf", &arr[i][j]) != 1)
			{
				printf("잘못된 입력입니다. 다시 입력해 주십시오,");
				while (getchar() != '\n');
			}
		}
	}
	for (int i = 0; i < row; i++)printf("\n%d열의 평균은 : %g",i+1, col_aver(arr[i], col));
	printf("\n전체 평균은 : %g", aver(arr, row, col));
	printf("\n최대값 : %g", max(arr, row, col));
	printf("전체 배열 : \n");
	show_arr(arr, row, col);
	return 0;
}
double col_aver(double* arr, int col)
{
	double sum=0;
	for (int i = 0; i < col; i++)sum += arr[i];
	return sum / (double)col;
}
double aver(double (*arr)[5],int row, int col)
{
	double sum = 0;
	for (int i = 0; i < row; i++)for (int j = 0; j < col; j++)sum += arr[i][j];
	return sum /(row*col);
}
double max(double(*arr)[5], int row, int col)
{
	double temp=0;
	for (int i = 0; i < row; i++)for (int j = 0; j < col; j++)if (temp < arr[i][j])temp = arr[i][j];
	return temp;
}
void show_arr(double(*show_arr)[5], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		printf("(");
		for (int j = 0; j < col; j++)printf("%3g ", show_arr[i][j]);
		printf(")\n");
	}
}
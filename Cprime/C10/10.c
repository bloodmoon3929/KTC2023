#include<stdio.h>
void sum_arr(int[], int[], int[],int);
void show_arr(int[],int);
int main(void)
{
	int arr_fir[] = {2,4,5,8};
	int arr_sec[] = {1,0,4,6};
	int arr_tir[3];
	int fir_len = sizeof(arr_fir) / sizeof(int);
	int sec_len = sizeof(arr_sec) / sizeof(int);
	int tir_len = sizeof(arr_tir) / sizeof(int);
	sum_arr(arr_fir, arr_sec, arr_tir,tir_len);
	printf("첫번째 배열 : ");
	show_arr(arr_fir,fir_len);
	printf("두번째 배열 : ");
	show_arr(arr_sec, sec_len);
	printf("  배열의 합 : ");
	show_arr(arr_tir, tir_len);
	return 0;
}
void sum_arr(int *sum_arr_fir, int *sum_arr_sec, int* sum_arr_tir,int tir_len)
{
	for (int i = 0; i < tir_len; i++)sum_arr_tir[i] = sum_arr_fir[i] + sum_arr_sec[i];
}
void show_arr(int* show_arr,int len)
{
	printf("(");
	for (int i = 0; i < len; i++)printf("%d ", show_arr[i]);
	printf(")\n");
}
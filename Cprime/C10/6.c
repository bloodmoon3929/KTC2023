#include<stdio.h>
void show(double show_arr[],int show_len);
double* reverse(double input_arr[], int input_len);
int main(void)
{
	double arr[] = {3.1,4.1,5.9,2.3};
	int len = sizeof(arr)/sizeof(double);
	printf("뒤집기 전의 배열 : ");
	show(arr,len);
	double* reverse_arr =reverse(arr, len);
	printf("뒤집은 후의 배열 : ");
	show(reverse_arr, len);
	return 0;
}
double* reverse(double input_arr[], int input_len)
{
	int right=input_len-1, left=0;
	double temp;
	for (int i = 0; i < input_len/2; i++)
	{
		temp = input_arr[left];
		input_arr[left] = input_arr[right];
		input_arr[right] = temp;
		left++, right--;
	}
	return input_arr;
}
void show(double show_arr[], int show_len)
{
	printf("(");
	for (int i = 0; i < show_len;i++)printf("%g ", show_arr[i]);
	printf(")\n");
}